#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[10] = { 0, };
int visited[100001] = { false };

vector<int> v;

void backtrack(int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";

		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!visited[v[i]])
		{
			visited[v[i]] = true;
			arr[depth] = v[i];
			backtrack(depth + 1);
			visited[v[i]] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	v.resize(N + 1);
	for (int i = 1; i <= N; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	backtrack(0);

	return 0;
}
