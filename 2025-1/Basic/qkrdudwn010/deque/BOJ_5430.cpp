#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        string op;
        cin >> op;

        int n;
        cin >> n;

        deque<int> dq;
        string num_str;
        cin >> num_str;

        string temp = "";
        for (int i = 0; i < num_str.length(); i++) {
            if (isdigit(num_str[i])) {
                temp += num_str[i];
            } else if (!temp.empty()) {
                dq.push_back(stoi(temp));
                temp = "";
            }
        }

        bool reversed = false;
        bool error = false;

        for (int i = 0; i < op.length(); i++) {
            if (op[i] == 'R') {
                reversed = !reversed;
            } else if (op[i] == 'D') {
                if (dq.empty()) {
                    cout << "error\n";
                    error = true;
                    break;
                }
                if (reversed) dq.pop_back();
                else dq.pop_front();
            }
        }

        if (!error) {
            cout << "[";
            if (!dq.empty()) {
                if (reversed) {
                    for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
                        if (it != dq.rbegin()) cout << ",";
                        cout << *it;
                    }
                } else {
                    for (auto it = dq.begin(); it != dq.end(); ++it) {
                        if (it != dq.begin()) cout << ",";
                        cout << *it;
                    }
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}
