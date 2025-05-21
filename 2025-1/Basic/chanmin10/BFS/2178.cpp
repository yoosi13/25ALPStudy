#include <iostream>
#include <utility>
#include <queue>

#define X first
#define Y second

using namespace std;

string board[200];   //탐색할 판
int dist[200][200];            //방문 여부 체크
pair<int, int> cur;
queue<pair<int, int> > Q;        //방문한 위치

int dx[4] = {1, 0, -1, 0}; 
int dy[4] = {0, 1, 0, -1};

int main(){
    int n, m;
    cin >> n >> m;                    //탐색할 판의 행&열
    for(int i = 0; i < n; i++)    // 탐색할 판 입력
        cin >> board[i];
    Q.push({0,0});
    while(!Q.empty()){
        cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int x = cur.X + dx[i];
            int y = cur.Y + dy[i];
            if(x < 0 || x >= n || y < 0 || y >= m)  continue;
            if(board[x][y] == '0')    continue;
            dist[x][y] = dist[cur.X][cur.Y] + 1;
            Q.push({x,y});
            board[x][y] = '0';
        }
    }
    cout << dist[n - 1][m - 1] + 1;
    return 0;
}
