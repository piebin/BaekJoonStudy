#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n=0;
	int cost[3];//���� ���
	int home[10000][3];
	
	cin >> n;

	home[0][0]=0;
	home[0][1] = 0;
	home[0][2] = 0;
	//home[1]�� i-1�� ���ϱ����� �ʿ�.

	for (int i = 1; i <= n; i++)
	{
		cin >> cost[0] >> cost[1] >> cost[2];

		//�������� ���� �ٸ� ������ �ٲٱ� ���� �ּҰ�+���� ���� �ٲٴµ� ���� ���
		//=>������ ���+���� ���
		home[i][0] = min(home[i - 1][1], home[i - 1][2]) + cost[0];
		home[i][1] = min(home[i - 1][0], home[i - 1][2]) + cost[1];
		home[i][2] = min(home[i - 1][0], home[i - 1][1]) + cost[2];
	}

	int result = min(home[n][0], min(home[n][1], home[n][2]));
	//���ϴ� ������ �ٲٱ� ���� �ʿ��� ����� ���� ���Ǿ�����->�� ���� �� �� ���غ��� ���� ���� �� ����.
	cout << result;

}