#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[10] = { 0, };
bool visited[10001] = { false };
vector<int> number;

void backtrack(int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < depth; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++)
	{
		visited[number[i]] = true;
		arr[depth] = number[i];
		backtrack(depth + 1);
		visited[number[i]] = false;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	number.resize(N + 1);
	for (int i = 1; i <= N; i++)
	{
		cin >> number[i];
	}

	sort(number.begin(), number.end());

	backtrack(0);

	return 0;
}
