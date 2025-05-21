#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int> s; 
  int k;
  
  cin >> k;

  for(int i=0; i<k; i++) {
    int n;
    cin >> n;
    if(n == 0) {
      s.pop();
      continue;
    }
    s.push(n);
  }

  int sum = 0;
  while(!s.empty()) {
    sum += s.top();
    s.pop();
  } 

  cout << sum;

  return 0;
}

