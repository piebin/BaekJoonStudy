#include <iostream>

using namespace std;

int main()
{
	int n=0;
	cin >> n;

	//�Ϻ��ϰ� ������ �Ѵٰ� ����=>�ϴ� �� 3���� �������� �� ���Ĵ� 1���� ������.
	//ex)3, 6. 9, 12.
	//��, Ȧ���϶� ����̰� �̱�� ¦���϶� â���̰� �̱�.

	if (n % 2 == 0)
	{
		cout << "CY";
	}
	else
		cout << "SK";



}