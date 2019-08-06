#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M; // 끊어진 기타줄의 수, M개의 브랜드
	int bar = 1000, six_bar = 1000; //기타 줄 가격 , 6개 기타줄 가격
	int min_cost = 1000; // 최소의 가격
	cin >> N >> M;
	int** ary_cost = new int*[M];
	for (int j = 0; j < M; j++)
	{
		ary_cost[j] = new int[2];
		ary_cost[j][0] = 0;
		ary_cost[j][1] = 0;

	}
	//vector<vector<int>> ary(M, vector<int>(2, 0));
	
	for (int i = 0; i < M; i++)
	{
		cin >> ary_cost[i][0]>> ary_cost[i][1];
		six_bar = min(six_bar, ary_cost[i][0]);
		bar = min(bar, ary_cost[i][1]);
	}
	if (N < 6)
		min_cost = min(six_bar, bar*N);
	else
	{
		if (N % 6 == 0)
			min_cost = min(six_bar*(N / 6), bar*N);
		else
		{
			min_cost = min(bar*N, six_bar*(N / 6) + bar * (N % 6));
			min_cost = min(min_cost, six_bar*(N / 6 + 1));
		}
	}
	for (int i = 0; i < M; i++)
		delete[] ary_cost[i];
	cout << min_cost;
	return 0;
}