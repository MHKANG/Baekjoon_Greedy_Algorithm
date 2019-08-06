#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	
	int N; // ������ ����;
	int L; // �� ������ �ߵ� �� �ִ� �ִ� �߷�
	
	cin >> N;
	int* rope_ary = new int[N]; //�������� ������ ��Ÿ�� �迭
	for (int k = 0; k < N; k++)
	{
		cin >> L;
		rope_ary[k] = L;
	}
	sort(rope_ary, rope_ary+N);
	int result = 0;
	for (int s = 0; s < N; s++)
	{
		result = max(result, rope_ary[s] * (N - s));
	}
	cout << result << endl;
	return 0;
}
