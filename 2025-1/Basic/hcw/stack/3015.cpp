#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<pair<int, int>> s;

    int now = 0;
    int count_same = 0;
    long long count_pair = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> now;

        count_same = 1;
        while (!s.empty() && s.top().first < now)
        {
            count_pair += s.top().second;
            s.pop();
        }

        if (!s.empty())
        {
            if (s.top().first == now)
            {
                count_pair += s.top().second;
                count_same = (s.top().second + 1);
                if (s.size() > 1)
                {
                    count_pair++;
                }
                s.pop();
            }
            else
            {
                count_pair++;
            }
        }
        s.push(make_pair(now, count_same));
    }
    cout << count_pair << "\n";

    return 0;
}
