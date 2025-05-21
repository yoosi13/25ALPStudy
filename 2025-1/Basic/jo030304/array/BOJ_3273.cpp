#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(100000, 0);
	vector<int> position(100001, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		position[v[i]]++;
	}

	int x;
	cin >> x;

	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if (x - v[i] > 100000 || x - v[i] < 1)
		{
			continue;
		}
		if (position[x - v[i]] > 0)
		{
			result++;
		}
	}
	
	cout << result / 2 << "\n";

	return 0;
}
