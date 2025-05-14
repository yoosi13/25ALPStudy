#include <iostream>
#include <queue>
using namespace std;

int main(){
    int T, M, N, K;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    cin >> T;
    while(T--){
        bool board[50][50] = {};
        queue<pair<int, int>> q;
        int result = 0;
        cin >> M >> N >> K;
        while(K--){
            int a, b;
            cin >> a >> b;
            board[b][a] = true;
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(board[i][j]){
                    q.push(make_pair(j, i));
                    result++;
                    while(!q.empty()){
                        pair cur = q.front();
                        q.pop();
                        for(int k = 0; k < 4; k++){
                            pair tmp = {cur.first + dx[k], cur.second + dy[k]};
                            if(tmp.first >= 0 && tmp.first < M && tmp.second >= 0 && tmp.second < N)
                                if(board[tmp.second][tmp.first]){
                                    q.push({tmp.first, tmp.second});
                                    board[tmp.second][tmp.first] = false;
                                }
                        }
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;   
}
