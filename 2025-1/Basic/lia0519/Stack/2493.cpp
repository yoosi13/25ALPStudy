#include <iostream>
#include <stack>
using namespace std;

int n;
stack<pair<int, int>> tower;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	tower.push({ 100000001, 0 });

	for (int i = 1; i <= n; i++) {
		int high;
		cin >> high;
		while (tower.top().first < high) {
			tower.pop();
		}
		cout << tower.top().second << " ";
		tower.push({ high, i });
	}
	return 0;
}
