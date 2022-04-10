#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ori[100000];
	int dp[100000];
	int ans = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ori[i];
	}
	dp[0] = ori[0];
	ans = dp[0];
	//ori�� �Է¹��� ���� �״�θ� ����. dp�� ���ӵǴ� ���� ū ���� ����.

	for (int i = 1; i < n; i++)
	{
		dp[i] = max(dp[i - 1] + ori[i], ori[i]);
		//���������� ���ӵ� ���� �ڱ��ڽ��� ���� ���� �ڱ� �ڽ� �� ū �� ���.
		//-> ������ ��� �̾��, ������ ����
		ans = max(ans, dp[i]);
		//������ ��� ���ο� ������ ��
	}

	cout << ans;



}