#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool sort_char(char a, char b)
{
	if (a > b)
		return true;
	else
		return false;
}
int main()
{
	string N;
	cin >> N;
	long long sum = 0;
	bool zero = false;
	for (int i = 0; i < N.size(); i++)
	{
		sum += (N[i] - '0');
		if (!(N[i] - '0')) //0이 있는지 없는지를 판단
			zero = true;
	}
	// 3의 배수가 아니거나 0이 없다면 -1 을 반환 아닐 경우 숫자 반환
	if (sum % 3 || !zero)
		cout << -1 << "\n";
	else
	{
		//가장 큰수를 만들고 싶어 하기 때문에 내림 차순으로 정렬하여 숫자 출력
		sort(N.begin(), N.end(), sort_char);
		cout << N << "\n";
	}
	
	return 0;
}