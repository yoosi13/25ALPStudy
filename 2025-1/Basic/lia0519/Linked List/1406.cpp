#include <iostream>
#include <list>
using namespace std;

int main() {
	string s;
	int m;
	cin >> s;
	cin >> m;

	list<char> editor(s.begin(), s.end());
	auto cursor = editor.end();

	for (int i = 0; i < m; i++) {
		char command;
		cin >> command;

		if (command == 'L') {
			if (cursor != editor.begin()) {
				--cursor;
			}
		}
		
		else if (command == 'D') {
			if (cursor != editor.end()) {
				++cursor;
			}
		}

		else if (command == 'B') {
			if (cursor != editor.begin()) {
				cursor = editor.erase(--cursor);
			}
		}

		else if (command == 'P') {
			char c;
			cin >> c;
			editor.insert(cursor, c);
		}
	}

	for (char c : editor) {
		cout << c;
	}
	cout << endl;
	return 0;
}
