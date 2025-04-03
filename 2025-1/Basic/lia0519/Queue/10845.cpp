#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (s == "push") {
			int t;
			cin >> t;
			q.push(t);
		}

		else if (s == "pop") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}

		else if (s == "size") {
			cout << q.size() << endl;
		}

		else if (s == "empty") {
			if (q.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}

		else if (s == "front") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
			}
		}

		else if (s == "back") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.back() << endl;
			}
		}
	}
	return 0;
}
