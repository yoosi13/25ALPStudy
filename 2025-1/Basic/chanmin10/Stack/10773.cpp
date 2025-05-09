#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    stack<int> stc;
    int k, n, sum = 0;

    cin >> k;
    while(k--){
        cin >> n;
        if(n)   stc.push(n);
        else    stc.pop();
    }

    while(!stc.empty()){
        sum += stc.top();
        stc.pop();
    }
    cout << sum;
    return 0;
}
