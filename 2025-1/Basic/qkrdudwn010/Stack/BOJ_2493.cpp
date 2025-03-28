#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    //(인덱스, 타워 높이)
    stack<pair<int,int>> st;
    st.push({0, 100000001});

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        while(st.top().second < x){
            st.pop();
        }
        cout << st.top().first << " ";
        st.push({i, x});
    }
    return 0;
}
