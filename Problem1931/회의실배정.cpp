#include <iostream>
#include <queue>
using namespace std;
struct confirm {
	int m_start;
	int m_end;
	confirm(int _start, int _end) :m_start(_start), m_end(_end) {};
};
bool operator <(confirm c1, confirm c2)
{
	if (c1.m_end != c2.m_end)
		return c1.m_end > c2.m_end;
	else
		return c1.m_start > c2.m_start;
}
int main()
{
	int N; // 회의의 수;
	int start, end; // 시작 시간 끝나는 시간;
	int result = 0;
	priority_queue<confirm> que;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> start >> end;
		que.push(confirm(start, end));
	}
	end = -1;

	while (!que.empty())
	{
		confirm c = que.top();
		que.pop();

		if (c.m_start >= end) 
		{
			result++;
			end = c.m_end;
		}
	}
	cout << result << endl;
	return 0;
}