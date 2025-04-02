#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

int n, m;

vector<vector<int>> relation;
vector<int> visited;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	relation.resize(n + 1);
	visited.resize(n + 1, false);
	for (int i = 0; i < m; i++)
	{
		int c, e;
		cin >> c >> e;

		relation[c].push_back(e);
		relation[e].push_back(c);
	}

	set<int> s;
	int result = 0;
	visited[1] = true;
	for (int i : relation[1])
	{
		s.insert(i);
		if (!visited[i])
		{
			visited[i] = true;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (visited[i])
		{
			for (int j : relation[i])
			{
				s.insert(j);
			}
		}
	}

	if (relation[1].size() >= 1)
	{
		cout << s.size() - 1 << "\n";
	}
	else
	{
		cout << s.size() << "\n";
	}

	return 0;
}
