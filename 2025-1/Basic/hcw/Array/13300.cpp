#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int student[2][6] = {0};

    for (int i = 0; i < n; i++)
    {
        int s, y;
        cin >> s >> y;
        student[s][y-1]++;
    }

    int room = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            room += (student[i][j] + k - 1) / k;
            // 이 수식을 통해 student[i][j]가 0이면 방을 늘리지 않고,
            // 한명이라도 있으면 방을 1개 늘리고,
            // k의 배수만큼 학생이 더 있으면 방을 2,3,4... 개 더 늘리는 식으로 연산할 수 있다.
        }
    }

    cout << room;

    return 0;
}
