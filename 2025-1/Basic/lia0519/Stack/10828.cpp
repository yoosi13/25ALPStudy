#include <iostream>
using namespace std;

class Stack{
    int data[100000];
    int idx;

public:
    Stack() { idx = 0; }
    ~Stack() {}

    void push(int x) {
        data[idx++] = x;
    }
    void pop() {
        idx--;
    }
    int top() {
        return data[idx - 1];
    }
    int empty() {
        if (idx == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    int size() {
        return idx;
    }
};

int main() {
    int n;
    cin >> n;

    Stack st;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str == "push") {
            int num;
            cin >> num;
            st.push(num);
        }
        if (str == "pop") {
            if (st.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        if (str == "size") {
            cout << st.size() << '\n';
        }
        if (str == "empty") {
            if (st.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        if (str == "top") {
            if (st.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << st.top() << '\n';
            }
        }
    }
    return 0;
}
