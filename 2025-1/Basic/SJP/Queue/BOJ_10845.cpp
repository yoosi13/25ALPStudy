#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> Q;
    int N;
    cin >> N;
    while (N > 0){
        string text;
        cin >> text;
        if (text == "push"){
            int X;
            cin >> X;
            Q.push(X);
        }
        else if (text == "pop"){
            if (Q.empty()) cout << -1 << endl;
            else {
                cout << Q.front() << endl;
                Q.pop();
            } 
        }
        else if (text == "size") cout << Q.size() << endl;
        else if (text == "empty") cout << Q.empty() << endl;
        else if (text == "front"){
            if (Q.empty()) cout << -1 << endl;
            else cout << Q.front() << endl;
        }
        else if (text == "back"){
            if (Q.empty()) cout << -1 << endl;
            else cout << Q.back() << endl;
        }
        N--;
    }
}
