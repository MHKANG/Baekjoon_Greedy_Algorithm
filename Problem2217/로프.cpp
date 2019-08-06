#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	
	int N; // 로프의 갯수;
	int L; // 각 로프가 견딜 수 있는 최대 중량
	
	cin >> N;
	int* rope_ary = new int[N]; //로프들의 집합을 나타낸 배열
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
