#include <iostream>
#include <deque>
using namespace std;

deque <int> DQ;
int main() {
    int N;
    cin >> N;
    while (N--) {
        string command;
        cin >> command;
        
        if (command == "push_front") {
            int X;
            cin >> X;
            DQ.push_front(X);
        } else if (command == "push_back") {
            int X;
            cin >> X;
            DQ.push_back(X);
        } else if (command == "pop_front") {
            if (DQ.size() == 0) cout << -1 << endl;
            else { cout << DQ.front() << endl;
                DQ.pop_front();
            }
        } else if (command == "pop_back") {
            if (DQ.size() == 0) cout << -1 << endl;
            else { cout << DQ.back() << endl;
                DQ.pop_back();
            }
        } else if (command == "size") {
            cout << DQ.size() << endl;
        } else if (command == "empty") {
            cout << DQ.empty() << endl;
        } else if (command == "front") {
            if (DQ.empty()) cout << -1 << endl;
            else cout << DQ.front() << endl;
        } else if (command == "back") {
            if (DQ.empty()) cout << -1 << endl;
            else cout << DQ.back() << endl;
        }
    }
}
