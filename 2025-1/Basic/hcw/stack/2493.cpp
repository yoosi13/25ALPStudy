#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> R(n, 0);
    stack<pair<int, int>> s;
    // 첫번째 int는 높이, 두번째 int는 인덱스 (1부터시작) 로 생각
    for (int i = 1; i <= n; i++)
    {
        int h;
        cin >> h;

        while (!s.empty())
        {
            if (s.top().first >= h)
            {
                R[i - 1] = s.top().second;
                break;
            }
            else
            {
                s.pop();
            }
        }

        s.push({ h,i });
    }

    for (int num : R)
    {
        cout << num << " ";
    }

    return 0;
}
