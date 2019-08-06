#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, K; // N명의 여학생, M명의 남학생, K명의 인턴 쉽;
	
	cin >> N >> M >> K;
	cout << min(min(N / 2, M), (M + N - K) / 3);
	return 0;
}