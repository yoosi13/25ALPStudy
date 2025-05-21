#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;


void interpret(deque<int> &dq, string str){
    int k = 0;
    for(auto e : str){
        if(e >= '0' && e <= '9'){
            k = k*10 + (e - '0');
        }
        else{
            if(k)   dq.push_back(k);
            k = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string cmd, arr;
    int n, t;
    cin >> n;
    while(n--){
        bool er = false;
        bool rev = 0;
        deque<int> dq;
        cin >> cmd >> t >> arr;
        interpret(dq, arr);
        for(auto e : cmd){
            if(e == 'R')
                rev = rev? 0 : 1;
            else if(e == 'D'){
                if(dq.empty()){
                    er = true;
                    break;
                }
                else{
                    if(rev) dq.pop_back();
                    else    dq.pop_front();
                }
            }
        }
        if(rev) reverse(dq.begin(), dq.end());
        if(!er){
            cout << '[';
            for(int i = 0;i < dq.size(); i++){
                cout << dq[i];
                if(i + 1 < dq.size()) cout << ',';
            }
            cout << "]\n";
        }
        else    cout << "error\n";
    }
    return 0;
}
