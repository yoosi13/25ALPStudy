#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int en = 0;
    int cnt = 0;
    int sum = 0;
    for (int st = 0; st < N; st++) {
        while (en <= N && sum < M) {
            sum += a[en];
            en++;
        }
        if (sum == M) cnt++;

        sum -= a[st];
    }
    cout << cnt;
}