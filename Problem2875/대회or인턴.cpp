#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, K; // N���� ���л�, M���� ���л�, K���� ���� ��;
	
	cin >> N >> M >> K;
	cout << min(min(N / 2, M), (M + N - K) / 3);
	return 0;
}