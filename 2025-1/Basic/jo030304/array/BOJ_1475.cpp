#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int r_num;
	cin >> r_num;

	int arr[10] = { 0, };
	while (1)
	{
		arr[r_num % 10]++;
		if (r_num / 10 == 0)
		{
			break;
		}
		r_num /= 10;
	}

	int max = -1;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
		{
			continue;
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	int sum69 = arr[6] + arr[9];
	if (sum69 % 2 == 1)
	{
		sum69 += 1;
		sum69 /= 2;
	}
	else
	{
		sum69 /= 2;
	}

	if (max < sum69)
	{
		max = sum69;
	}

	cout << max << "\n";

	return 0;
}
