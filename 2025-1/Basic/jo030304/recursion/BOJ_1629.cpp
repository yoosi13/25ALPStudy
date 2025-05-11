#include <iostream>
using namespace std;

int A, B, C;
long long result;

long long power(long long a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	else if (b % 2 == 0)
	{
		long long half = power(a, b / 2);
		return (half * half) % C;
	}
	else
	{
		long long half = power(a, (b - 1) / 2);
		return (half * half % C * a % C) % C;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> A >> B >> C;
	A %= C;
	result = power(A, B);
	cout << result << "\n";

	return 0;
}
