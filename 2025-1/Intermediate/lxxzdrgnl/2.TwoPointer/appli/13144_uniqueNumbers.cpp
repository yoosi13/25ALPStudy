#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    long long ans = 0;
    set<int> chk;

    int en = 0;
    for (int st = 0; st < n; st++) {
        while (en < n && chk.find(arr[en]) == chk.end()) {
            chk.insert(arr[en]);
            en++;
        }
        ans += (en - st);
        chk.erase(arr[st]);
    }
    cout << ans;
}