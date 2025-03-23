#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    queue<int> q1;
    for (int i = 1; i <= n; i++)
    {
        q1.push(i);
    }

    queue<int> q2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k - 1; j++)
        {
            q1.push(q1.front());
            q1.pop();
        }
        q2.push(q1.front());
        q1.pop();
    }

    cout << "<";
    for (int i = 0; i < n - 1; i++)
    {
        cout << q2.front() << ", ";
        q2.pop();
    }
    cout << q2.front();
    cout << ">";

    return 0;
}
// queue 말고 list로 푸는법은 모르겠음.
