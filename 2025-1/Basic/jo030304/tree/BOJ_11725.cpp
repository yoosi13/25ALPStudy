#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> tree;
vector<bool> visited;
vector<int> result;

void DFS(int current)
{
	visited[current] = true;
	for (int next : tree[current])
	{
		if (!visited[next])
		{
			result[next] = current;
			DFS(next);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	tree.resize(N + 1);
	result.resize(N + 1, 0);
	visited.resize(N + 1, false);
	for (int i = 1; i < N; i++)
	{
		int c, e;
		cin >> c >> e;

		tree[c].push_back(e);
		tree[e].push_back(c);
	}

	DFS(1);

	for (int i = 2; i <= N; i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}
