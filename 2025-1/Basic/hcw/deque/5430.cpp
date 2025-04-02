#include <iostream>
#include <deque>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int TestCase;
    cin >> TestCase;
    for (int i = 0; i < TestCase; i++)
    {
        string cmd;
        cin >> cmd;

        int n;
        cin >> n;

        deque<int> d;
        string array;
        cin >> array;

        string temp;
        for (int j = 0; j < array.size(); j++)
        {
            if (isdigit(array[j]))
            {
                temp += array[j];
            }
            else if (array[j] == ',' || array[j] == ']')
            {
                if (!temp.empty())
                {
                    d.push_back(stoi(temp));
                    temp.clear();
                }
            }
        }

        bool reverse = false;
        bool error = false;

        for (int j = 0; j < cmd.size(); j++)
        {
            if (cmd[j] == 'R')
            {
                reverse = !reverse;
            }
            else if (cmd[j] == 'D')
            {
                if (d.empty())
                {
                    cout << "error\n";
                    error = true;
                    break;
                }
                if (reverse == false)
                    d.pop_front();
                else
                    d.pop_back();
            }
        }

        if (error)
            continue;

        cout << "[";
        if (!d.empty())
        {
            if (!reverse)
            {
                int size = d.size();
                for (int i = 0; i < size - 1; i++)
                    cout << d[i] << ",";
                cout << d.back();
            }
            else
            {
                int size = d.size();
                for (int i = size - 1; i > 0; i--)
                    cout << d[i] << ",";
                cout << d.front();
            }
        }
        cout << "]\n";
    }

    return 0;
}
