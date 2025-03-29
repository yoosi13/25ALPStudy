#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N;
    cin >> N;
    stack<int> stack;
    while (N > 0){
        string text;
        cin >> text;
        if (text == "push"){
            int X;
            cin >> X;
            stack.push(X);
        }
        else if (text == "pop"){
            if (stack.size() == 0){
                cout << -1 << endl;
            }
            else{
                cout << stack.top() << endl;
                stack.pop();
            }
        }
        else if (text == "size"){
            cout << stack.size() << endl;
        }
        else if (text == "empty"){
            if (stack.size() == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (text == "top"){
            if (stack.size() == 0) cout << -1 << endl;
            else cout << stack.top() << endl;
        }
        N--;
    }
}
