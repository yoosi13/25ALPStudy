#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    // 최소와 최대에 포인터를 잡고 결과를 구할 예정이므로 정렬

    int x;
    cin >> x;

    int count = 0;
    int size = n;

    bool end = true;
    int i = 0;
    while (end)
    {
        // i가 수열의 크기보다 커지면 종료
        if (i == size - 1 || i > size - 1)
        {
            end = false;
        }
        // 더해서 x값이 나오는 경우 둘다 중앙을 향해 이동
        else if (v.at(i) + v.at(size - 1) == x)
        {
            count++;
            i++;
            size--;
        }
        // x보다 작으면 왼쪽에서 오른쪽
        else if (v.at(i) + v.at(size - 1) < x)
        {
            i++;
        }
        // x보다 크면 오른쪽에서 왼쪽
        else if (v.at(i) + v.at(size - 1) > x)
        {
            size--;
        }
        
    }

    cout << count;

    return 0;
}
