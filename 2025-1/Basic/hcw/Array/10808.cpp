#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int Alpha[26]{0};
    // 알파벳 배열, 0으로 초기화

    for (int i = 0; i < s.length(); i++)
    {
        Alpha[s.at(i) - 97] += 1;
        // 아스키코드 활용
    }

    for (int num : Alpha)
    {
        cout << num << " ";
    }

    return 0;
}
