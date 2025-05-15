#include <iostream>
#include <vector>
using namespace std;

int N, M;

vector<vector<int>> map;
vector<bool> visited;

void DFS(int x);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	map.resize(N + 1);
	visited.resize(N + 1, false);
	for (int i = 0; i < M; i++)
	{
		int c, e;
		cin >> c >> e;

		map[c].push_back(e);
		map[e].push_back(c);
	}

	int result = 0;
	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			result++;
			DFS(i);
		}
	}

	cout << result << "\n";

	return 0;
}

void DFS(int x)
{
	for (int i : map[x])
	{
		if (!visited[i])
		{
			visited[i] = true;
			DFS(i);
		}
	}
}
