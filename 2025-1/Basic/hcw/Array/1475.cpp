#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int number[9]{ 0 };

    for (int i = 0; i < n.length(); i++)
    {
        if (n.at(i) == '9')
            number[6]++;
        else
            number[n.at(i) - 48]++;
    }

    if (number[6] % 2 == 0) // 9와 6을 동일시 했으므로 
        number[6] /= 2;     // 짝수면 1/2
    else
    {
        number[6] /= 2;
        number[6]++;        // 홀수면 1/2 연산 후 +1
    }


    int max = 0;
    for (int num : number)
    {
        if (num > max)
        {
            max = num;
        }
    }

    cout << max;

    return 0;
}
