#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    stack<long long> s;
    long long sum = 0;
    int H;
    for (int i = 0; i < N; i++)
    {
        cin >> H;

        while (!s.empty() && s.top() <= H)
        {
            s.pop();
        }

        sum += s.size();
        s.push(H);
    }

    cout << sum;

    return 0;
}
