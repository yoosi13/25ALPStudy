#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, S;
    cin >> N >> S;

    vector<int> a(N);

    for (int i = 0; i < N; i++) cin >> a[i];

    int len = INT_MAX;
    int sum = a[0];
    int en = 0;

    for (int st = 0; st < N; st++) {
        while (en < N && sum < S) {
            en++;
            if (en != N) sum += a[en];
        }
        if (en == N) break;
        len = min(len, en - st + 1);
        sum -= a[st];
    }

    if (len == INT_MAX) len = 0;
    cout << len;
}