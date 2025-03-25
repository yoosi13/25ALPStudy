#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int TestCase;
    cin >> TestCase;

    for (int i = 0; i < TestCase; i++)
    {
        string s;
        cin >> s;
        list<char> l(s.begin(), s.end());
        list<char> Password;
        auto input = l.begin();
        auto cursor = Password.begin();

        for (int j = 0; j < l.size(); j++)
        {
            if (*input == '<')
            {
                if (cursor != Password.begin())
                {
                    cursor--;
                }
            }
            else if (*input == '>')
            {
                if (cursor != Password.end())
                {
                    cursor++;
                }
            }
            else if (*input == '-')
            {
                if (cursor != Password.begin())
                {
                    cursor = Password.erase(prev(cursor));
                }
            }
            else
            {
                Password.insert(cursor, *input);
            }
            input++;
        }
        for (char c : Password)
        {
            cout << c;
        }
        cout << "\n";
    }
    return 0;
}

// < , > , - , a, A
