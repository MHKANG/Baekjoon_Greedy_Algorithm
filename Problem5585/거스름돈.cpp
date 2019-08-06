#include <iostream>

using namespace std;
int count_coin(int ary[],int input);
int main()
{
	int N; // ÁöºÒÇÒ µ·
	int coin[6] = { 500, 100, 50 , 10 ,5, 1 };
	cin >> N;
	N = 1000 - N;
	cout<< count_coin(coin, N) << "\n";
	return 0;
}
int count_coin(int ary[], int input)
{
	int temp;
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		temp = 0;
		temp = input / ary[i];
		input -= ary[i] * temp;
		count += temp;
	}
	return count;
}