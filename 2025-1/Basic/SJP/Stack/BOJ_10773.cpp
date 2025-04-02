#include <iostream>
#include <stack>
using namespace std;

int main(){
    int K;
    cin >> K;
    stack <int>stack;
    while (K > 0){
        int x;
        cin >> x;
        if (x != 0) stack.push(x);
        else stack.pop();
        K--;
    }
    int result = 0;
    while (stack.size() > 0){
        result += stack.top();
        stack.pop();
    }
    cout << result;
}
