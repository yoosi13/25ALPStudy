#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;
    queue<long long> q;
    for (long long i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (s == "pop")
        {
            if (q.empty())
                cout << "-1" << "\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if (s == "front")
        {
            if (q.empty())
                cout << "-1" << "\n";
            else
            {
                cout << q.front() << "\n";
            }
        }
        else if (s == "back")
        {
            if (q.empty())
                cout << "-1" << "\n";
            else
            {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}
