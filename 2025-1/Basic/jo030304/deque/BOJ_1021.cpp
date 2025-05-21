#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	deque<int> dq;
	for (int i = 0; i < N; i++)
		dq.push_back(i + 1);

	int cnt = 0, num, ord;
	for (int i = 0; i < M; i++)
	{
		cin >> num;
		int size = dq.size();
		for (int j = 0; j < size; j++)
		{
			if (dq[j] == num)
			{
				ord = j;
				break;
			}
		}
		while (dq.front() != num)
		{
			if (ord > size / 2) // 뒤로 돌리기
			{
				cnt++;
				dq.push_front(dq.back());
				dq.pop_back();
			}
			else
			{
				cnt++;
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		dq.pop_front();
	}

	cout << cnt << "\n";

	return 0;
}
