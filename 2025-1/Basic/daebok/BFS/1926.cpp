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
	std::vector<int> row(m + 10, 0);
	std::vector<std::vector<int>> vec(n+10, row);
	
	int val;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			std::cin >> val;
			row[j] = val;

		}
		vec[i] = row;
	}
	std::vector<bool> brow(m + 10, true);
	std::vector<std::vector<bool>> bvec(n + 10, brow);
	std::queue<std::pair<int, int>> q;
	int count = 0;

	int result = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			
			if (vec[i][j]&& bvec[i][j])
			{
				int prev = 0;
				bvec[i][j] = false;
				q.push(std::make_pair(i, j));
				while (!q.empty())
				{
					std::pair<int, int> target = q.front();
					q.pop();
					++prev;
					if (vec[target.first - 1][target.second] && bvec[target.first - 1][target.second])
					{
						q.push(std::make_pair(target.first - 1, target.second));
						bvec[target.first - 1][target.second] = false;
					}
					if (vec[target.first + 1][target.second] && bvec[target.first + 1][target.second])
					{
						q.push(std::make_pair(target.first + 1, target.second));
						bvec[target.first + 1][target.second] = false;
					}
					if (vec[target.first][target.second-1] && bvec[target.first][target.second-1])
					{
						q.push(std::make_pair(target.first, target.second-1));
						bvec[target.first][target.second-1] = false;
					}
					if (vec[target.first][target.second + 1] && bvec[target.first][target.second + 1])
					{
						q.push(std::make_pair(target.first, target.second + 1));
						bvec[target.first][target.second + 1] = false;
					}

				}
				if (result < prev)
					result = prev;

				++count;
			}
		}

	}
	std::cout << count << "\n";
	std::cout << result;
	return 0;
}
