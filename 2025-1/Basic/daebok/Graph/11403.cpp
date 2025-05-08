#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>
// 
// 줄마다 bfs 갈 수 있는 번호 다 1로 바꾸고 방문 표시
// 방문표시 매 줄마다 초기화
// 그렇게 해서 결과


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> arr(n + 10);
	std::vector<int> row(n + 10);
	

	int val;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cin >> val;
			row[j] = val;
		}
		arr[i] = row;

	}

	std::queue<int> q;
	for (int i = 1; i <= n; ++i)
	{
		std::vector<std::vector<bool>> v(n + 10);
		std::vector<bool> r(n + 10, true);
		for (int i = 1; i <= n; ++i)
		{
			v[i] = r;
		}
		for (int j = 1; j <= n; ++j)
		{
			if (v[i][j] && arr[i][j])
			{
				q.push(j);
				v[i][j] = false;
			}
		}
		while (!q.empty())
		{
			int target = q.front();
			q.pop();
			for (int j = 1; j <= n; ++j)
			{
				if (v[target][j] && arr[target][j])
				{
					q.push(j);
					arr[i][j] = 1;
					v[i][j] = false;
					v[target][j] = false;
				}
			}

		}
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
