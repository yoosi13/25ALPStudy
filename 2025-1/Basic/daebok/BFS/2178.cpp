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
	std::vector<char> row(m + 10, 0);
	std::vector<std::vector<char>> vec(n + 10, row);

	char val;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			std::cin >> val;
			row[j] = val;

		}
		vec[i] = row;
	}
	std::vector<int> brow(m + 10, 0);
	std::vector<std::vector<int>> bvec(n + 10, brow);
	std::queue<std::pair<int, int>> q;
	std::queue<std::pair<int, int>> nextq;
	int count = 0;

	bvec[1][1] = 1;
	nextq.push(std::make_pair(1, 1));
	while(!nextq.empty())
	{
		++count;
		q.swap(nextq);
		while (!q.empty())
		{
			std::pair<int, int> target = q.front();
			q.pop();
			if (target.first == n && target.second == m)
			{
				std::cout << count;
				return 0;
			}
			if (vec[target.first - 1][target.second] == '1' && bvec[target.first - 1][target.second] == 0)
			{
				nextq.push(std::make_pair(target.first - 1, target.second));
				bvec[target.first - 1][target.second] = count;
			}
			if (vec[target.first + 1][target.second] == '1' && bvec[target.first + 1][target.second] == 0)
			{
				nextq.push(std::make_pair(target.first + 1, target.second));
				bvec[target.first + 1][target.second] = count;
			}
			if (vec[target.first][target.second - 1] == '1' && bvec[target.first][target.second - 1] == 0)
			{
				nextq.push(std::make_pair(target.first, target.second - 1));
				bvec[target.first][target.second - 1] = count;
			}
			if (vec[target.first][target.second + 1] == '1' && bvec[target.first][target.second + 1] == 0)
			{
				nextq.push(std::make_pair(target.first, target.second + 1));
				bvec[target.first][target.second + 1] = count;
			}

		}
	}

	return 0;
}
