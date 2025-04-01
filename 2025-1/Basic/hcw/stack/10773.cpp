#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k; 
    cin >> k;

    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            if (s.empty() == false)
                s.pop();
        }
        else
        {
            s.push(n);
        }
    }
    int len = s.size();
    int sum = 0;

    if (s.empty())
        cout << sum;

    else
    {
        for (int i = 0; i < len; i++)
        {
            sum += s.top();
            s.pop();
        }
        cout << sum;
    }

    return 0;
}
