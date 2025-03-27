#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, temp;
    long long count = 0;

    cin >> n;

    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++) {
        cin >> h;

        while (!s.empty() && h > s.top().first) {
            count += s.top().second;
            s.pop();
        }

        if (!s.empty() && h == s.top().first) {
            temp = s.top().second;
            count += temp;
            s.pop();
            if (!s.empty())
                count++;
            s.push({ h, temp + 1 });
        }
        else {
            if (!s.empty())
                count++;
            s.push({ h, 1 });
        }
    }

    cout << count << "\n";
    return 0;
}
