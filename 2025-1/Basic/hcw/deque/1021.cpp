#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    deque<int> d;
    for (int i = 1; i <= N; i++)
    {
        d.push_back(i);
    }
    // 1부터 N까지의 덱
    int L = 0; // 왼쪽으로 몇번
    int R = 0; // 오른쪽으로 몇번 이동했는지
    for (int i = 1; i <= M; i++)
    {
        int find;
        cin >> find;

        int index = 0;
        for (int j = 0; j < d.size(); j++)
        {
            if (d[j] == find)
            {
                index = j;
                break;
            }
        }
        // 내가 찾을라캤던 애가 index 번째에 있다!
        // 가운데 기준으로 왼쪽이면 L++ 오른쪽이면 R++
        bool found = false;
        if (index < d.size() - index)
        {
            while (!found)
            {
                if (d.front() == find)
                {
                    d.pop_front();
                    found = true;
                }
                else
                {
                    d.push_back(d.front());
                    d.pop_front();
                    L++;
                }
            }
        }
        else
        {
            while (!found)
            {
                if (d.front() == find)
                {
                    d.pop_front();
                    found = true;
                }
                else
                {
                    d.push_front(d.back());
                    d.pop_back();
                    R++;
                }
            }
        }

    }

    cout << L + R;

    return 0;
}
