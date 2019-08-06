#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct t_result
{
	int surface_point;
	int document_point;
	t_result(int _spoint, int _dpoint) :surface_point(_spoint), document_point(_dpoint) {};
};
bool operator<(t_result t1, t_result t2)
{
	if (t1.document_point < t2.document_point)
		return true;
	else
		return false;
}
int main()
{
	vector<int> result_ary;
	int T, N; // 테스트 케이스 수, 지원자 숫자.
	int s_point, d_point;
	int result ;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		vector<t_result> point_vec;
		for (int j = 0; j < N; j++)
		{
			cin >> d_point >> s_point;
			t_result temp(s_point, d_point);
			point_vec.push_back(temp);
		}
		result = 0;
		vector<t_result> select;
		sort(point_vec.begin(), point_vec.end());
		select.push_back(point_vec[0]);
		for (int y = 0; y < N; y++)
		{
			if (select[result].surface_point > point_vec[y].surface_point)
			{
				select.push_back(point_vec[y]);
				result++;
			}
		 }
		int t_result = select.size();
		result_ary.push_back(t_result);
	}
	for (int i = 0; i < result_ary.size(); i++)
	{
		cout << result_ary[i] << endl;
	}
	return 0;
}