#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    deque<int> dq;
    int n, t, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) dq.push_back(i);
    cin >> n;
    while(n--){
        cin >> t;
        int idx = find(dq.begin(), dq.end(), t) - dq.begin();
        if(idx <= dq.size()/2){
            while(dq.front() != t){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else{
            while(dq.front() != t){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        dq.pop_front();
    }
    cout << cnt;
    return 0;
}
