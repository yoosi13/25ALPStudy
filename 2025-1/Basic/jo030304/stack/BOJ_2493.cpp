#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int num;
	stack<pair<int, int>> s;
	vector<int> result(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> num;

		while (!s.empty() && s.top().first < num)
		{
			s.pop();
		}

		if (!s.empty())
		{
			result[i] = s.top().second;
		}

		s.push(make_pair(num, i + 1));
	}

	for (int i : result)
	{
		cout << i << " ";
	}

	return 0;
}
