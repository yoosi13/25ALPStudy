#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, V;

vector<vector<int>> map;
vector<bool> visited;

void DFS(int x);
void BFS(int x);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M >> V;

	map.resize(N + 1);
	visited.resize(N + 1, false);
	for (int i = 0; i < M; i++)
	{
		int c, e;
		cin >> c >> e;

		map[c].push_back(e);
		map[e].push_back(c);
	}

	for (int i = 1; i <= N; i++)
	{
		sort(map[i].begin(), map[i].end());
	}

	DFS(V);
	cout << "\n";
	fill(visited.begin(), visited.end(), false);
	BFS(V);
	cout << "\n";

	return 0;
}

void DFS(int x)
{
	if (visited[x])
	{
		return;
	}

	cout << x << " ";
	visited[x] = true;

	for (auto i : map[x])
	{
		if (!visited[i])
		{
			DFS(i);
		}
	}
}

void BFS(int x)
{
	queue<int> q;
	q.push(x);
	visited[x] = true;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		cout << now << " ";

		for (auto i : map[now])
		{
			if (!visited[i])
			{
				q.push(i);
				visited[i] = true;
			}
		}
	}



	for (int i = 0; i < q.size(); i++)
	{
		cout << q.front() << " ";
		q.pop();
	}
}
