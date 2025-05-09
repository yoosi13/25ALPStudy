#include <bits/stdc++.h>

using namespace std;

// 중복 개수를 세는 배열
int cnt[200001];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int en = 0;
    int len = 0;

    ++cnt[a[en]];  // 처음 위치 a0 증가

    for (int st = 0; st < N; st++) {
        while (en + 1 < N && cnt[a[en + 1]] < K) {
            ++en;
            cnt[a[en]]++;
        }
        len = max(len, en - st + 1);

        cnt[a[st]]--;
    }
    cout << len;
}