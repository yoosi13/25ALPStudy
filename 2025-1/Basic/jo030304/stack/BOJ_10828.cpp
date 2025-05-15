#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	stack<int> s;

	string command;
	int x;
	while (N--) {
		cin >> command;
		if (command == "push") {
			cin >> x;
			s.push(x);
		}
		else if (command == "pop") {
			if (s.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (command == "size") {
			cout << s.size() << endl;
		}
		else if (command == "empty") {
			cout << s.empty() << endl;
		}
		else {
			if (s.empty() == 1)
				cout << -1 << endl;
			else {
				cout << s.top() << endl;
			}
		}
	}

	return 0;
}
