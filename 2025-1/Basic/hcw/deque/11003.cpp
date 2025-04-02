#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, L;
    cin >> N >> L;

    deque<pair<int, int>> D; // first 값 second 인덱스
    vector<int> Result;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        while (!D.empty() && D.back().first > n)
        {
            D.pop_back();
        }
        D.push_back({ n,i });

        if (D.front().second <= i - L)
        {
            D.pop_front();
        }
        Result.push_back(D.front().first);
    }
    for (int num : Result)
    {
        cout << num << " ";
    }
    return 0;
}
