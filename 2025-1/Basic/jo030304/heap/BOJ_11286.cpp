#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int x;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.empty() == 1)
			{
				cout << 0 << "\n";
				continue;
			}
			else
			{
				cout << pq.top().second << "\n";
				pq.pop();
			}
		}
		else
		{
			pq.push({ abs(x), x });
		}
	}

	return 0;
}
