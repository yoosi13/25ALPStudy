#include <iostream>
using namespace std;

int paper[128][128] = { 0, };
int result[2] = { 0, };

bool isSame(int x, int y, int size)
{
	int value = paper[x][y];
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (value != paper[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

void divide(int x, int y, int size)
{
	if (isSame(x, y, size))
	{
		result[paper[x][y]]++;
		return;
	}

	int newsize = size / 2;
	for (int dx = 0; dx < 2; dx++)
	{
		for (int dy = 0; dy < 2; dy++)
		{
			divide(x + dx * newsize, y + dy * newsize, newsize);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> paper[i][j];
		}
	}

	divide(0, 0, N);

	for (int i = 0; i < 2; i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}
