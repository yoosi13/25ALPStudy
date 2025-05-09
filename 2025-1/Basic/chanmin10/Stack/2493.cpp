#include <iostream>
#include <stack>
#include <algorithm>
#define height first
#define idx second
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, h, preH = 0, ans = 0;
    stack<pair<int, int>> tower;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> h;
        while(!tower.empty() && preH < h){
            tower.pop();
            if(!tower.empty()){
                preH = tower.top().height;
                ans = tower.top().idx;
            }
            else{
                preH = 0;
                ans = 0;
            }
        }
        cout << ans << ' ';
        tower.push(make_pair(h, i));
        preH = h;
        ans = i;
    }
    return 0;
}
