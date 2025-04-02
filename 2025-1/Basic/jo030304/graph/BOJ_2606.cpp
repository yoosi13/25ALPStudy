#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;
int result = 0;

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

	visited[1] = true;
	DFS(1);

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
			result++;
			DFS(i);
		}
	}
}
