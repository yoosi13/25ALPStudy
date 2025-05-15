#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> pq;
	int arr[100000];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
		{
			if (pq.empty() == 1)
			{
				cout << 0 << "\n";
				continue;
			}
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
		{
			pq.push(arr[i]);
		}
	}

	return 0;
}
