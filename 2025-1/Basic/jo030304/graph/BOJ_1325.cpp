#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
vector<vector<int>> connect;
vector<bool> visited;
vector<int> cnt;
vector<int> result;

void DFS(int x, int y);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	connect.resize(N + 1);
	for (int i = 0; i < M; i++)
	{
		int c, e;
		cin >> c >> e;

		connect[e].push_back(c);
	}

	cnt.resize(N + 1, 0);
	for (int i = 1; i <= N; i++)
	{
		visited.assign(N + 1, false);
		DFS(i, i);
	}

	int mx = -1;
	for (int i = 1; i <= N; i++)
	{
		if (mx < cnt[i])
		{
			mx = cnt[i];
		}
	}

	for (int i = 1; i <= N; i++)
	{
		if (mx == cnt[i])
		{
			result.push_back(i);
		}
	}

	for (int i : result)
	{
		cout << i << ' ';
	}
	cout << "\n";

	return 0;
}

void DFS(int x, int y)
{
	if (visited[x])
	{
		return;
	}
	visited[x] = true;

	for (int i : connect[x])
	{
		if (!visited[i])
		{
			cnt[y]++;
			DFS(i, y);
		}
	}
}
