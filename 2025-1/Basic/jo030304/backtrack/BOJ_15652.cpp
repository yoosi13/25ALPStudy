#include <iostream>
using namespace std;

int N, M;
int arr[10] = { 0, };
int visited[10] = { false };

void backtrack(int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				return;
			}
		}
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";

		return;
	}

	for (int i = 1; i <= N; i++)
	{
		arr[depth] = i;
		backtrack(depth + 1);
		visited[i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	backtrack(0);

	return 0;
}
