#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

vector<vector<int>> mlist;
vector<vector<int>> relation;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	mlist.resize(N + 1, vector<int>(N + 1, INT_MAX));
	for (int i = 1; i <= N; i++)
	{
		mlist[i][i] = 0;
	}
	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;

		mlist[A][B] = 1;
		mlist[B][A] = 1;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (mlist[i][j] > mlist[i][k] + mlist[k][j] && mlist[i][k] != INT_MAX && mlist[k][j] != INT_MAX)
				{
					mlist[i][j] = mlist[i][k] + mlist[k][j];
				}
			}
		}
	}

	int min = INT_MAX, result;
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		for (int j = 1; j <= N; j++)
		{
			sum += mlist[i][j];
		}
		if (min > sum)
		{
			result = i;
			min = sum;
		}
	}

	cout << result << "\n";

	return 0;
}
