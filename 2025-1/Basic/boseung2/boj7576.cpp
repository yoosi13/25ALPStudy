#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
int dist[1002][1002];
int n,m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // m, n을 입력 받는다.
  cin >> m >> n;
  queue<pair<int, int>> Q;
  
  // 행렬을 입력 받는다.
  for(int i=0; i<n; i++ ){
    for(int j=0; j<m; j++) {
      cin >> board[i][j];
      // 익은 토마토가 있다면 queue에 넣는다.
      if(board[i][j] == 1) {
        Q.push({i, j});
      }
      // 안익은 토마토는 방문 행렬을 초기화한다.
      if(board[i][j] == 0){
        dist[i][j] = -1;
      }
    }
  }

  // bfs 돈다.
  while(!Q.empty()) {
   auto cur = Q.front();
   Q.pop();
   // 현재 위치 기준 우, 상, 좌, 하 순서로 방문한다.
   for(int dir = 0; dir<4; dir++) {
    int nx = cur.X + dx[dir];
    int ny = cur.Y + dy[dir];
    // 행렬 크기를 넘어서면 continue
    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
    // 이미 방문 했다면 continue
    if(dist[nx][ny] >= 0) continue;
    // 방문 위치에 ???
    dist[nx][ny] = dist[cur.X][cur.Y]+1;
    Q.push({nx, ny});
   } 
  }

  int ans = 0;
  // 행렬 전체 순회
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      // 안익은 토마토 ??
      if(dist[i][j] == -1) {
        cout << -1;
        return 0;
      }
      ans = max(ans, dist[i][j]);
    }
  }
  cout << ans;

}