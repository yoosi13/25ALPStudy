#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i].first >> a[i].second;
    }

    for (int st = 0; st <= K; st++) {
        int en = st;
        while (en <= K) {
            int len = 0;
            for (int i = 0; i < N; i++) {
                int tempst = max(a[i].first, st);
                int tempen = min(a[i].second, en);

                if (tempst <= tempen) {
                    len += (tempen - tempst);
                }

                if (len > K) break;  // 길이가 K를 초과하면 조기 종료
            }

            if (len == K) {
                cout << st << " " << en;
                return 0;
            }
            en++;
        }
    }
    cout << "0 0\n";
}