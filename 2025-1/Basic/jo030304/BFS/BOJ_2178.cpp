#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int N, M;

vector<vector<int>> map;
vector<vector<bool>> visited;
vector<vector<int>> A;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void BFS(int x, int y);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	map.resize(N + 1, vector<int>(M + 1));
	visited.resize(N + 1, vector<bool>(M + 1, false));
	A.resize(N + 1, vector<int>(M + 1, 0));
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < M; j++)
		{
			map[i][j] = str[j] - '0';
		}
	}

	A[0][0] = 1;
	BFS(0, 0);

	cout << A[N - 1][M - 1] << "\n";

	return 0;
}

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;

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
				if (!visited[nx][ny] && map[nx][ny] == 1)
				{
					A[nx][ny] = A[nowX][nowY] + 1;
					visited[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}
