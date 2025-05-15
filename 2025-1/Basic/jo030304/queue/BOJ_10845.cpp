#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;

	queue<int> q;
	string s;
	int n;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> n;
			q.push(n);
		}
		else if (s == "pop")
		{
			if (q.empty() == 1)
				cout << -1 << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (s == "size")
		{
			cout << q.size() << "\n";
		}
		else if (s == "empty")
		{
			if (q.empty() == 1)
			{
				cout << 1 << "\n";
			}
			else
				cout << 0 << "\n";
		}
		else if (s == "front")
		{
			if (q.empty() == 1)
				cout << -1 << "\n";
			else
				cout << q.front() << "\n";
		}
		else if (s == "back")
		{
			if (q.empty() == 1)
				cout << -1 << "\n";
			else
				cout << q.back() << "\n";
		}
	}

	return 0;
}
