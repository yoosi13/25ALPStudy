#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    sort(P.begin(), P.end());

    int total_time = 0;
    int accumulated_time = 0;

    for (int i = 0; i < N; ++i) {
        accumulated_time += P[i];
        total_time += accumulated_time;
    }

    cout << total_time << '\n';
    return 0;
}
