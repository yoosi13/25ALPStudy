#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int board[1003][1003];
int dist[1003][1003];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    int n, m;   
    bool un;    //익지 않은 토마토 여부
    int est = 0;    //익는 시간 중 가장 오래 걸리는 시간  
    queue<pair<int, int> > Q;
    pair<int, int> cur;

    cin >> m >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1)
                Q.push({i, j});
            else if(board[i][j] == 0)
                un = true;
        }
    if(!un){
        cout << '0';
        return 0;
    }
    while(!Q.empty()){
        cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if(x < 0 || x >= n || y < 0 || y >= m)  continue;
            if(board[x][y] == -1 || board[x][y] == 1)   continue;
            Q.push({x, y});
            board[x][y] = 1;
            dist[x][y] = dist[cur.first][cur.second] + 1;
            est = max(est, dist[x][y]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 0){
                cout << "-1";
                return 0;
            }
        }
    }
    cout << est;
    return 0;
}
