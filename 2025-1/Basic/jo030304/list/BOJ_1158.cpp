#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	vector<int> v;
	while (!q.empty())
	{
		for (int i = 0; i < K - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}

	int last = v[v.size() - 1];

	cout << "<";
	for (int i : v)
	{
		if (i == last)
		{
			cout << i;
		}
		else
		{
			cout << i << ", ";
		}
	}
	cout << ">";

	return 0;
}
