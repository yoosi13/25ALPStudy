#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string p;
        int n;
        cin >> p >> n;

        string arr_str;
        cin >> arr_str;

        deque<int> q;
        if (n > 0) {
            arr_str = arr_str.substr(1, arr_str.size() - 2);
            string num = "";
            for (char c : arr_str) {
                if (c == ',') {
                    q.push_back(stoi(num));
                    num = "";
                } else {
                    num += c;
                }
            }
            if (!num.empty()) q.push_back(stoi(num));
        }

        bool error_flag = false;
        bool is_reversed = false;

        for (char cmd : p) {
            if (cmd == 'R') {
                is_reversed = !is_reversed;
            } else if (cmd == 'D') {
                if (q.empty()) {
                    error_flag = true;
                    break;
                }
                if (is_reversed) q.pop_back();
                else q.pop_front();
            }
        }

        if (error_flag) {
            cout << "error" << endl;
        } else {
            cout << "[";
            if (is_reversed) {
                for (int i = q.size() - 1; i >= 0; --i) {
                    cout << q[i];
                    if (i != 0) cout << ",";
                }
            } else {
                for (size_t i = 0; i < q.size(); ++i) {
                    cout << q[i];
                    if (i != q.size() - 1) cout << ",";
                }
            }
            cout << "]" << endl;
        }
    }

    return 0;
}
