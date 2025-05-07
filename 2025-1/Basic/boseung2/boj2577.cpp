#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a,b,c;
  cin >> a >> b >> c;
  int value = a*b*c;
  int counter[10] = {};

  cout << value << "\n";

  for (int i=0; i<=9; i++) {
    counter[value%10]++;
    value /= 10;

    if(value ==0) break;
  }  

  for(int i=0; i<=9; i++) cout << counter[i] << "\n";
}