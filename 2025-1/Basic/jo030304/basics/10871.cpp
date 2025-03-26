#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X;
	cin >> N >> X;

	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (X > num)
		{
			v.push_back(num);
		}
	}

	for (int i : v)
	{
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}
