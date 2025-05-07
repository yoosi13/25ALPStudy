#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<int> st;
	int n;
	cin >> n;
	int cnt = 1;
	string a;

	while (n--) {
		int t;
		cin >> t;
		while (cnt <= t) {
			st.push(cnt++);
			a += "+\n";
		}

		if (st.top() != t) {
			cout << "NO\n";
			return 0;
		}

		st.pop();
		a += "-\n";
	}
	cout << a;
	return 0;
}
