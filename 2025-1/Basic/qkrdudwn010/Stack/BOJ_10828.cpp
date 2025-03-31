#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    stack<int> st;

    while(n--){
        string op;
        cin >> op;
        if(op == "push"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if(op == "pop"){
            if(st.empty()) {
                cout << -1 << '\n';
            }
            else{
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if(op == "size"){
            cout << st.size() << '\n';
        }
        else if(op == "empty"){
                cout << st.empty() << '\n';
        }
        else if(op == "top"){
            if(st.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << st.top() << '\n';
            }
        }
    }
    return 0;
}
