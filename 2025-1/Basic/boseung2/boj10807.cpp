#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n, target, count[201] = {};
  cin >> n;

  for(int i=0; i<n; i++) {
    int input;
    cin >> input;
    count[input+100]++;
  }

  cin >> target;
  cout << count[target+100] << "\n";
}