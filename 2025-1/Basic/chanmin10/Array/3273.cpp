#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, num[1000000], arr[1000001] = {}, x, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        arr[num[i]]++;
    }
    cin >> x;
    for(int i = 0; i < n; i++){
        int t = x - num[i];
        if(arr[num[i]] == 0 || t < 0 || t > 1000000)    continue;
        arr[num[i]]--;
        if(arr[t])
            cnt += arr[t];
    }
    cout << cnt;
    return 0;
}
