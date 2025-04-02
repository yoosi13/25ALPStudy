#include <bits/stdc++.h>
using namespace std;

int a[1000001];  // 누적합 배열
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y]--;
    }

    for (int i = 1; i <= 1000000; i++) {
        a[i] += a[i - 1];
    }

    int en = 0;
    int sum = 0;

    for (int st = 0; st <= 1000000; st++) {
        while (en <= 1000000 && sum < K) {
            sum += a[en];
            en++;
        }

        // 구간 합이 K인 경우 출력
        if (sum == K) {
            cout << st << " " << en;
            return 0;
        }

        sum -= a[st];
    }

    // 구간을 못 찾은 경우
    cout << "0 0";
}