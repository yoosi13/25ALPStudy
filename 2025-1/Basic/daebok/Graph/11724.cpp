#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> vec(n+10);
	int val1, val2;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> val1 >> val2;
		vec[val1].push_back(val2);
		vec[val2].push_back(val1);
	}

	int count = 0;

	std::vector<bool> v(n + 10, true);
	std::queue<int> q;
	
	for (int i = 1; i <= n; ++i)
	{
		if (v[i])
		{
			q.push(i);
			v[i] = false;
			++count;
		}
		while (!q.empty())
		{
			int target = q.front();
			q.pop();
			for (int j = 0; j < vec[target].size(); ++j)
			{
				if (v[vec[target][j]])
				{
					v[vec[target][j]] = false;
					q.push(vec[target][j]);
				}
			}
			


		}


	}
	
	std::cout << count;
	return 0;
}
