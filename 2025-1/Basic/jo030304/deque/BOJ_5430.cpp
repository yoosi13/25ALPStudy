#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        string move;
        cin >> move;

        int n;
        cin >> n;

        string str;
        cin >> str;

        deque<int> dq;
        string num = "";

        for (int i = 1; i < str.size() - 1; i++)
        {
            if (str[i] == ',')
            {
                dq.push_back(stoi(num));
                num = "";
            }
            else
            {
                num += str[i];
            }
        }
        if (!num.empty())
        {
            dq.push_back(stoi(num));
        }

        bool reversed = false;
        bool error = false;

        for (char cmd : move)
        {
            if (cmd == 'R')
            {
                reversed = !reversed;
            }
            else
            {
                if (dq.empty())
                {
                    error = true;
                    break;
                }
                if (!reversed)
                {
                    dq.pop_front();
                }
                else
                {
                    dq.pop_back();
                }
            }
        }

        if (error)
        {
            cout << "error\n";
        }
        else
        {
            cout << "[";
            if (!dq.empty())
            {
                if (!reversed)
                {
                    for (int i = 0; i < dq.size(); i++)
                    {
                        cout << dq[i];
                        if (i != dq.size() - 1)
                        {
                            cout << ",";
                        }
                    }
                }
                else
                {
                    for (int i = dq.size() - 1; i >= 0; i--)
                    {
                        cout << dq[i];
                        if (i != 0)
                        {
                            cout << ",";
                        }
                    }
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}
