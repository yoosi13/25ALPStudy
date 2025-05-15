#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
stack<pair<int, int>> tower; // 높이, 탑 순서 push

int main() {
  // 입출력 방식으로 인한 시간 지연 감소. 안해주면 시간 초과
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  tower.push({100000001,0});// 탑 스택 초기화(기준점이 되는 가상의 0번 탑)
  
  // 탑은 6 9 5 7 4 순으로 있고, 왼쪽 방향으로 쏘니까(4탑부터 기준) 스택 개념 응용 가능
  for(int i=1; i<=n; i++){
    int h; cin >> h;
  
    while(tower.top().X < h) // 탑 높이가 현재 높이보다 작으면
      tower.pop(); // 이전(왼쪽) 순서 탑으로
    
    cout << tower.top().Y << " "; // 레이저 받은 탑의 순서 출력
    
    tower.push({h,i}); // 탑 높이, 순서 push
  }
}
