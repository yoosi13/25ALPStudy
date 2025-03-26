#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	if (N >= 90 && N <= 100)
	{
		cout << 'A' << "\n";
	}
	else if (N >= 80 && N < 90)
	{
		cout << 'B' << "\n";
	}
	else if (N >= 70 && N < 80)
	{
		cout << 'C' << "\n";
	}
	else if (N >= 60 && N < 70)
	{
		cout << 'D' << "\n";
	}
	else
	{
		cout << 'F' << "\n";
	}

	return 0;
}
