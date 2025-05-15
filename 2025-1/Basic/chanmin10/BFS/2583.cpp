#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define x first
#define y second
using namespace std;

struct area{
    pair<int, int> p1, p2;
};

bool board[100][100];
queue<pair<int,int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    int M, N, K;
    int cnt = 0;
    vector<int> result;
    cin >> M >> N >> K;
    while(K--){
        area era;
        cin >> era.p1.x >> era.p1.y >> era.p2.x >> era.p2.y;
        for(int i = era.p1.x; i < era.p2.x; i++)
            for(int j = era.p1.y; j < era.p2.y; j++)
                board[j][i] = true;
    }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++){
            if(!board[j][i]){
                int s = 1;
                cnt++;
                q.push({i, j});
                board[j][i] = true;
                while(!q.empty()){
                    pair temp = q.front();
                    q.pop();
                    for(int k = 0; k < 4; k++){
                        int a = temp.x + dx[k],
                            b = temp.y + dy[k];
                        if(a >= 0 && a < N && b >= 0 && b < M){
                            if(!board[b][a]){
                                q.push({a, b});
                                board[b][a] = true;
                                s++;
                            }
                        }
                    }
                }
                result.push_back(s);
            }
        }
    sort(result.begin(), result.end());
    cout << cnt << '\n';
    for(int e : result)
        cout << e << ' ';
    cout << '\n';
    return 0;
}
