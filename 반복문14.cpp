#include <iostream>
using namespace std;

int main()
{
	int n = 0; int f = 0; int b = 0; int nn = 0; int o = 0; int c = 0;
	cin >> n;

	if (n < 10)
		n *= 10;

	o = n;

	while (true)
	{

		f = n / 10;//���ڸ�
		b = n % 10;//���ڸ�
		nn = (f + b)%10;

		n = (b * 10) + nn;
		
		c++;


		if (n == o)
			break;
	}

	cout << c;
}