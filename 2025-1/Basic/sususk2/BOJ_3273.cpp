#include<iostream>

using namespace std;
int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int arr[10000001] = {};
	int arr2[10000001] = {};
	int n2;
	int cnt = 0;



	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr2[arr[i]]++;
	}
	cin >> n2;
	for (int i = 0; i < n; i++)
	{
		if (n2 - arr[i] <= 0)
			continue;

		if (arr2[n2 - arr[i]] == 1)
			cnt++;

	}


	cout << cnt / 2;
}
