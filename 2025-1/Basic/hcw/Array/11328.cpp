#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int TestCase;
    string s1;
    string s2;

    cin >> TestCase;

    for (int i = 0; i < TestCase; i++)
    {
        cin >> s1 >> s2;

        if (s1.size() != s2.size())
        {
            cout << "Impossible" << "\n";
        }

        else
        {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 == s2)
                cout << "Possible" << "\n";
            else
                cout << "Impossible" << "\n";
        }
    }

    return 0;
}
