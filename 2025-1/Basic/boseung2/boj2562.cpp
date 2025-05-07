#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, max, maxi;
  for(int i=0; i<9; i++) {
    cin >> n;
    if(max < n) {
      max=n;
      maxi=i;
    }
  }

  cout << max << "\n" << maxi+1 << "\n";
}