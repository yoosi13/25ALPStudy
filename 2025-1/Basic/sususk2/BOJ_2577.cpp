#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{

	int a, b, c;
	cin >> a >> b >> c;
	int gob = a * b * c;
	string s = to_string(gob);
	int cnt = 0;
	for (char a = '0'; a <= '9'; a++)
	{
		cnt = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == a)
				cnt++;

		}
		cout << cnt << "\n";
	}


	return 0;
}
