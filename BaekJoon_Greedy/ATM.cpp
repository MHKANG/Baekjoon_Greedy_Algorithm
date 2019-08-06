#include <iostream>

using namespace std;
void sort(int ary[], int N);
int time_sum(int ary[], int N);
int main()
{
	int N; //����� ��( 1<= N <= 1000)
	int P; // �ѻ���� �����ϴµ� �ɸ��� �ð�
	int* timeAry; // ��� ����� �ɸ��� ���� �ð��� ��Ƶ� �迭
	cin >> N;
	timeAry = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> P;
		timeAry[i] = P;
	}
	//selection sort�� ���� �ð� �迭�� ���� ��
	sort(timeAry, N);
	cout << time_sum(timeAry, N);

}
void sort(int ary[], int N)
{
	int i, j, least, temp;
	for (i = 0; i < N -1; i++)
	{
		least = i;
		for (j = i+1; j < N; j++)
		{
			if (ary[j] < ary[least])
			{
				least = j;
			}
		}
		if (i != least)
		{
			temp = ary[i];
			ary[i] = ary[least];
			ary[least] = temp;
		}
	}
}
int time_sum(int ary[], int N)
{
	int temp = 0;
	int sum = 0;
	int* total_sum = new int[N]; //������ ����� ���� �ϴµ� ��ٸ��� �ð��� ���� �迭
	for (int i = 0; i < N; i++)
	{
		temp += ary[i]; 
		total_sum[i] = temp;
	}
	for (int j = 0; j < N; j++)
	{
		sum += total_sum[j];
	}
	return sum;
}