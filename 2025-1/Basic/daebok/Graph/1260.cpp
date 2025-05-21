#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, m, t;
	std::cin >> n >> m >> t;
	std::vector<std::vector<int>> vec(n + 10);
	int val1, val2;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> val1 >> val2;
		vec[val1].push_back(val2);
		vec[val2].push_back(val1);
	}
	for (int i = 1; i <= n; ++i)
	{
		std::sort(vec[i].begin(), vec[i].end());
	}
	int count = 0;
	std::vector<bool> Bv(n + 10, true);
	std::vector<bool> Dv(n + 10, true);
	std::queue<int> q;
	std::stack<int> s;
	

	s.push(t);

	while (!s.empty())
	{
		int target = s.top();
		s.pop();
		if(Dv[target])
		{
			for (int j = vec[target].size() - 1; j >= 0; --j)
			{
				if (Dv[vec[target][j]])
				{

					s.push(vec[target][j]);
				}

			}
			std::cout << target << " ";
			Dv[target] = false;
		}
	}
	std::cout << "\n";
	q.push(t);
	Bv[t] = false;
	while (!q.empty())
	{
		int target = q.front();
		q.pop();
		for (int j = 0; j < vec[target].size(); ++j)
		{
			if (Bv[vec[target][j]])
			{
				Bv[vec[target][j]] = false;
				q.push(vec[target][j]);
			}
		}
		std::cout << target << " ";


	}

	return 0;
}
