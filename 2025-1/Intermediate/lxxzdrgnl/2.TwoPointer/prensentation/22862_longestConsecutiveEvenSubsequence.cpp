#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int en = 0;
    int cnt = 0;
    int len = 0;

    for (int st = 0; st < N; st++) {
        while (en < N && cnt + (a[en] % 2 != 0) <= K) {
            if (a[en] % 2 != 0) cnt++;
            en++;
        }

        len = max(len, en - st - cnt);

        if (a[st] % 2 != 0) cnt--;
    }

    cout << len;
}