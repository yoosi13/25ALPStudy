#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		n++;
		q.push(n);
	}

	int f;
	while (q.size() > 1)
	{
		q.pop();
		f = q.front();
		q.pop();
		q.push(f);
	}

	cout << q.front() << "\n";

	return 0;
}
