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
		if (!(N[i] - '0')) //0�� �ִ��� �������� �Ǵ�
			zero = true;
	}
	// 3�� ����� �ƴϰų� 0�� ���ٸ� -1 �� ��ȯ �ƴ� ��� ���� ��ȯ
	if (sum % 3 || !zero)
		cout << -1 << "\n";
	else
	{
		//���� ū���� ����� �;� �ϱ� ������ ���� �������� �����Ͽ� ���� ���
		sort(N.begin(), N.end(), sort_char);
		cout << N << "\n";
	}
	
	return 0;
}