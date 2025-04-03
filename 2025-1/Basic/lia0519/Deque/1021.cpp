#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	int sum = 0;
	for (int i = 0; i < m; i++) {
		int a, idx = 0;
		cin >> a;

		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == a) {
				idx = i;
				break;
			}
		}

		if (idx <= dq.size() - idx) {
			while (dq.front() != a) {
				dq.push_back(dq.front());
				dq.pop_front();
				sum++;
			}
		}
		else {
			while (dq.front() != a) {
				dq.push_front(dq.back());
				dq.pop_back();
				sum++;
			}
		}
		dq.pop_front();
	}
	cout << sum << '\n';
	return 0;
}
