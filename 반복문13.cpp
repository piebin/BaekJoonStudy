#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	while (true)
	{
		cin >> a >> b;

		if (cin.eof() == true)
			break;
		cout << a + b << endl;
	}

}