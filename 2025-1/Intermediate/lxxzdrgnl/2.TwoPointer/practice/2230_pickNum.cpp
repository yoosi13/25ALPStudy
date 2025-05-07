#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    vector<int> a(N);

    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int result = INT_MAX;
    int en = 0;

    for (int st = 0; st < N; st++) {
        while (en < N && a[en] - a[st] < M) en++;
        if (en == N) break;
        result = min(result, a[en] - a[st]);
    }

    cout << result;
}