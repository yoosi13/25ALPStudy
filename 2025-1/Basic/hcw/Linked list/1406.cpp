#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n;
    cin >> n;

    list<char> l(s.begin(), s.end());
    // string -> list 형변환?
    
    auto cursor = l.end();
    //커서를 단어의 맨 마지막에 둠.
    
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        if (c == 'L')
        {
            if (cursor != l.begin()) // 주의
                cursor--;
        }
        else if (c == 'D')
        {
            if (cursor != l.end()) // 주의
                cursor++;
        }
        else if (c == 'B')
        {
            if (cursor != l.begin()) // 주의
            {
                cursor--;
                cursor = l.erase(cursor);
            }
        }
        else if (c == 'P')
        {
            char New;
            cin >> New;
            l.insert(cursor, New);
        }
    }

    for (char ch : l)
    {
        cout << ch;
    }

    return 0;
}
