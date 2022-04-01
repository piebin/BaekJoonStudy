#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << (i + 1) << ": " << a << " + " << b << " = " << sum(a, b) << endl;

	}

}