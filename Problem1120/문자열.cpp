#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	int result = 50;

	for (int dist = 0; dist <= B.length() - A.length(); dist++)
	{
		int cnt = 0;
		for (int i = 0; i < A.length(); i++)
		{
			if (A[i] != B[i + dist])
				cnt++;
		}
		result = min(result, cnt);
	}
	cout << result << "\n";
	return 0;
}