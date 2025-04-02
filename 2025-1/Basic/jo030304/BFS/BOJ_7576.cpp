#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int M, N;
int result = 0;
vector<vector<int>> map;
vector<vector<bool>> visited;
vector<vector<int>> tomato;

queue<pair<int, int>> q;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void BFS(queue<pair<int, int>>& q);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> M >> N;

	map.resize(N, vector<int>(M, 0));
	visited.resize(N, vector<bool>(M, false));
	tomato.resize(N, vector<int>(M, -1));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1)
			{
				q.push(make_pair(i, j));
				tomato[i][j] = 0;
				visited[i][j] = true;
			}
			else if (map[i][j] == -1)
			{
				visited[i][j] = true;
			}
		}
	}

	BFS(q);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (!visited[i][j])
			{
				cout << -1 << "\n";
				return 0;
			}
		}
	}

	cout << result << "\n";

	return 0;
}

void BFS(queue<pair<int, int>>& q)
{
	while (!q.empty())
	{
		int nowX = q.front().first;
		int nowY = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = nowX + dx[i];
			int ny = nowY + dy[i];

			if (nx >= 0 && ny >= 0 && nx < N && ny < M)
			{
				if (!visited[nx][ny] && map[nx][ny] == 0)
				{
					tomato[nx][ny] = tomato[nowX][nowY] + 1;
					visited[nx][ny] = true;
					q.push(make_pair(nx, ny));
					if (result < tomato[nx][ny])
					{
						result = tomato[nx][ny];
					}
				}
			}
		}
	}
}
