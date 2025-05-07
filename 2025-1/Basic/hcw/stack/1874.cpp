#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    // n개의 숫자로 이루어진 수열을 받을겁니다.

    stack<int> s;           // 1~n까지를 오름차순으로 넣을 스택
    vector<char> result;    // push, pop을 + - 로 저장할 벡터
    int stack_num = 1;
    // 스택에 쌓일 정수
    bool Possible = true;   // 만약 수열을 만들 수 없다면 반복문 안에서 false로 바꿔 no를 출력하게 함

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        // 수열 입력

        while (stack_num <= number)
        {
            s.push(stack_num);
            result.push_back('+');
            stack_num++;
        }

        if (s.top() == number)
        {
            result.push_back('-');
            s.pop();
        }
        else
        {
            Possible = false;
        }
    }

    if (Possible)
    {
        for (char c : result)
            cout << c << "\n";
    }
    else
        cout << "NO";

    return 0;
}
