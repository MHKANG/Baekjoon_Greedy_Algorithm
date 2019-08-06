#include <iostream>

using namespace std;
void sort(int ary[], int N);
int time_sum(int ary[], int N);
int main()
{
	int N; //사람의 수( 1<= N <= 1000)
	int P; // 한사람당 인출하는데 걸리는 시간
	int* timeAry; // 모든 사람이 걸리는 인출 시간을 모아둔 배열
	cin >> N;
	timeAry = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> P;
		timeAry[i] = P;
	}
	//selection sort로 인출 시간 배열을 정렬 함
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
	int* total_sum = new int[N]; //각각의 사람이 인출 하는데 기다리는 시간을 가진 배열
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