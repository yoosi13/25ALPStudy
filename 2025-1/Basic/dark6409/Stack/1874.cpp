#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n; cin >> n;
  stack<int> s; // 최소 하나는 있음
  string ans;

  int c=1; // 반복문 바깥에서 정의함. c는 반복문에서 계속 증가하기만 할 거임
  while(n--){
    int x; cin >> x;
    while(c <= x) {
      s.push(c++);
      ans += "+\n";
    }
    if(s.top() != x){
      cout << "NO"<< endl;
      return 0;
    }
    s.pop(); // pop 해도 c는 증가하는 상태로 쌓일 것
    ans += "-\n";
  }
  cout << ans;
}
