#include <iostream>
using namespace std;

int main() {
	string c;
	cin >> c;
	
	for (char a = 'a'; a <= 'z'; a++) {
		int cnt = 0;
		for (auto c : c) {
			if (a == c) {
				cnt++;
			}
		}
		cout << cnt << " ";
	}
	return 0;
}
