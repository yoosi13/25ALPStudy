#include<iostream>
#include <algorithm>
#include<queue>
using namespace std;

queue<int> q2;
queue<int> q;
int main()
{	
	int cnt=0;

	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		q.push(i + 1);

	}
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b-1; j++)
		{
			q.push(q.front());
			q.pop();
		}
		q2.push(q.front());
		q.pop();
	}




	cout << "<";
	for (int i = 0; i < a; i++)
	{
		if (i == a - 1)
		{
			cout << q2.front();
			q2.pop();
		}
		else
		{
			cout << q2.front() << ", ";
			q2.pop();
		}
			
			
	}
	cout << ">";
}
