#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

	string s;
	cin >> s;
	int cnt = 0;
	
	for (char a = 'a'; a <= 'z'; a++)
	{
		cnt = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == a)
				cnt++;

		}
		cout << cnt<< " ";
	}
	
	return 0;
}
