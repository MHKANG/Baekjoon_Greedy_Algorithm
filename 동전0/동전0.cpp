#include <iostream>

using namespace std;
int count_coin(int ary[], int N, int K);
int main()
{
	int N, K; // ������ �ִ� ������ ����, ������� �ϴ� ��
	int A; // ������ ��ġ
	cin >> N >> K;
	int* coin_ary = new int[N]; // ������ �ִ� ������ �����ϴ� �迭
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
	int count = 0; // �ʿ��� �� ���� Ƚ�� ���;
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