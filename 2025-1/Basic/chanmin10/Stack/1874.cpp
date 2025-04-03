#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int k, n, p = 1;
    bool fail = false;
    stack<int> stc;
    vector<char> v;
    cin >> k;
    while(k--){
        cin >> n;
        if(p <= n){
            while(p <= n){
                stc.push(p++);
                v.push_back('+');
            }
            stc.pop();
            v.push_back('-');
        }
        else if(!stc.empty() && stc.top() == n){
                stc.pop();
                v.push_back('-');
        }
        else    fail = true;
    }
    if(fail)    cout << "NO" << endl;
    else    for(auto e : v) cout << e << '\n';
    return 0;
}
