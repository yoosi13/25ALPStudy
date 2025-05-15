#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, a;

vector<vector<int>> map;
vector<vector<bool>> visited;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int BFS(int x, int y);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	map.resize(n, vector<int>(m, 0));
	visited.resize(n, vector<bool>(m, false));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	int result = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j] && map[i][j] == 1)
			{
				cnt++;
				result = max(result, BFS(i, j));
			}
		}
	}

	cout << cnt << "\n";
	cout << result << "\n";

	return 0;
}

int BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;
	int photo = 1;

	while (!q.empty())
	{
		int nowX = q.front().first;
		int nowY = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = nowX + dx[i];
			int ny = nowY + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny] && map[nx][ny] == 1)
			{
				photo++;
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
			}
		}
	}
	return photo;
}
