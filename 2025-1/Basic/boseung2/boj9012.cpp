#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  
  for(int i=0; i<n; i++) {
    stack<int> s;
    string value;
    cin >> value;

    // value 순회하며 '('이면 push, ')'이면 pop
    for(int j=0; j<value.length(); j++) {
      
      if(value[j] == '(') {
        s.push(1);
      }
      if(value[j] == ')') {
        if(s.empty()) {
          s.push(1);
          break;
        } 
        s.pop();
      }
    }

    if(s.empty()) {
      cout << "YES" << "\n";
    }
    if(!s.empty()) {
      cout << "NO" << "\n";
    }
    
  }
}