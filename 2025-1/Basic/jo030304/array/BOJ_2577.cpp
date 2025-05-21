#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	int sum = A * B * C;
	int arr[10] = { 0, };
	while (1)
	{
		arr[sum % 10]++;
		if (sum / 10 == 0)
		{
			break;
		}
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
