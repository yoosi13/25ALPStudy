// 1. 큐 활용
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  queue<int> q;

  // 맨위부터 버리고, 맨아래로, 버리고, ... 반복.
  // 원형 큐
  for(int i=1; i<=n; ++i){
    q.push(i);
  }
  int ans = 0;

  while(q.size() != 1){
    q.pop();
    ans = q.front();
    q.push(ans);
    q.pop();
  }
  cout << q.front();
}


// 2. 수학적 규칙 활용
/*
결과 정리
2->2
3->2
4->4
5->2
6->4
7->6
8->8
9->2
10->4
11->6
12->8
13->10
14->12
15->14
16->16
32->32
...
*/

// 규칙1 : N=2^k => 마지막 남는 수는 2^k
// 규칙2 : N != 2^k => 2(N-L)  (L: 가장 가까운 작은 2^k)
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  
  if((n & (n-1))==0) // n이 2의 제곱수인지 확인 : 10, 100, 1000, 10000, ...
      cout << n;
  else{
      //  __builtin_clz(N) : N을 32비트 기준으로 볼 때, 앞쪽에 있는 0 의 개수
      int b = (31 - __builtin_clz(n)); // N의 가장 높은자리 비트의 위치(0부터 시작)
      int result = 1 << b; // 2의 거듭제곱
      cout << 2 * (n-result);
  }
  
  return 0;
}
