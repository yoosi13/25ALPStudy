#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    long long sum;
    cin >> n;
    stack<int> st;

    while(n--){
        long long x;
        cin >> x;
        while(!st.empty() && st.top() <= x){
            st.pop();
        }
        sum += st.size();
        st.push(x);

    }
    cout << sum;

    return 0;
}
