#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a1[26] = { 0 };
    int a2[26] = { 0 };

    string s1;
    string s2;

    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        a1[s1.at(i) - 'a']++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        a2[s2.at(i) - 'a']++;
    }
    // s1과 s2의 알파벳 개수를 세어 배열 두개에 저장한다.
    
    int diff = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a1[i] != a2[i])
        {
            if (a1[i] > a2[i])
                diff += a1[i] - a2[i];
            else
                diff += a2[i] - a1[i];
        }
    }
    // 알파벳 개수의 차이를 계산 후 출력
    cout << diff;

    return 0;
}
