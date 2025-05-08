#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, m;
	std::cin >> n;
	std::cin >> m;
	std::vector<std::vector<int>> vec(510);
	int val1, val2;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> val1 >> val2;
		vec[val1].push_back(val2);
		vec[val2].push_back(val1);
	}

	int count = 0;

	std::vector<bool> v(510, true);
	std::queue<int> q;


	q.push(1);
	v[1] = false;
	int target = q.front();
	q.pop();
	for (int j = 0; j < vec[target].size(); ++j)
	{
		if (v[vec[target][j]])
		{
			v[vec[target][j]] = false;
			++count;
			q.push(vec[target][j]);
		}
	}
	while(!q.empty())
	{
		int target = q.front();
		q.pop();
		for (int j = 0; j < vec[target].size(); ++j)
		{
			if (v[vec[target][j]])
			{
				v[vec[target][j]] = false;
				++count;
			}
		}



	}


	std::cout << count;
	return 0;
}
