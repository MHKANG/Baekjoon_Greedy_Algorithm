#include <iostream>

using namespace std;
int count_coin(int ary[], int N, int K);
int main()
{
	int N, K; // 가지고 있는 동전의 종류, 만들고자 하는 합
	int A; // 동전의 가치
	cin >> N >> K;
	int* coin_ary = new int[N]; // 가지고 있는 동전을 저장하는 배열
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		coin_ary[i] = A;
	}
	cout << count_coin(coin_ary, N, K);
	return 0;
}
int count_coin(int ary[], int N, int K)
{
	int count = 0; // 필요한 총 동전 횟수 계산;
	int temp;
	for (int i = 0; i < N; i++)
	{
		temp = 0;
		temp += K / ary[N - i - 1];
		K -= ary[N - i - 1] * temp;
		count += temp;
	}
	return count;
}