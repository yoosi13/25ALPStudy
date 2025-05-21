#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue <int>q;

    int n;
    cin >> n;

    for (int i = 1; i < n+1; i++) {
        q.push(i);
    }

    if (n == 1) {
        cout << "1" << "\n";
        return 0;
    }

    for (int i = 0; i < n-2; i++) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    q.pop();

    cout << q.front() << "\n";
    
    return 0;
}
