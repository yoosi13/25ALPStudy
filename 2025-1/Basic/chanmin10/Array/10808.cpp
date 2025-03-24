#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string str;
    int n[26] = {0};

    cin >> str;
    
    for(char e : str)
        n[e-'a']++;

    for(int i = 0; i < 26; i++){
        cout << n[i] << ' ';
    }
    return 0;
}
