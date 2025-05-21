#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int M, N, K;
vector<vector<int>> map;

vector<int> result;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int BFS(int x, int y);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> M >> N >> K;

	map.resize(N, vector<int>(M, 0));
	for (int i = 0; i < K; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1; j < x2; j++)
		{
			for (int k = y1; k < y2; k++)
			{
				map[j][k] = -1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] == 0)
			{
				int a = BFS(i, j);
				result.push_back(a);
			}
		}
	}

	cout << result.size() << "\n";
	sort(result.begin(), result.end());
	for (int i : result)
	{
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}

int BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	map[x][y] = -1;

	int cnt = 1;
	while (!q.empty())
	{
		int nowX = q.front().first;
		int nowY = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = nowX + dx[i];
			int ny = nowY + dy[i];

			if (nx >= 0 && ny >= 0 && nx < N && ny < M && map[nx][ny] == 0)
			{
				q.push(make_pair(nx, ny));
				map[nx][ny] = -1;
				cnt++;
			}
		}
	}
	return cnt;
}
