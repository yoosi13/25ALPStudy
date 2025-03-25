#include<iostream>
#include<list>

using namespace std;


int main()
{

	list<char> l;
	string s;
	cin >> s;
	int n;
	cin >> n;
	
	char a;
	char b;
	for (int i = 0; i < s.size(); i++)
	{

		l.push_back(s[i]);
	}
	list<char>::iterator t = l.end(); 
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 'P')
		{
			cin >> b;
			l.insert(t, b);

		}

		else if (a == 'L')
		{
			if (t != l.begin())
				t--;


		}
		else if (a == 'D')
		{
			if (t != l.end())
				t++;

		}
		else if (a == 'B')
		{
			if (t != l.begin())
			{
				t--;
				t = l.erase(t);

			}


		}
	}





	for (auto e : l)
		cout << e;




}
