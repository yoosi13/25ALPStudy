#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count = 1;
    string str;
    stack<int> st;

    cin >> n;
    while(n--){
        int x;
        cin >> x;
        while(count <= x){
            st.push(count++);
            str += "+\n";
        }
        if(st.top() != x){
            cout << "NO";
            return 0;
        }
        st.pop();
        str += "-\n";
    }
    cout << str;
}
