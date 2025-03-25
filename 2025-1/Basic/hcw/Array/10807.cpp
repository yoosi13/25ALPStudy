#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.at(i) = a;
    }

    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v.at(i) == x)
            count++;
    }

    cout << count;
    return 0;
}
