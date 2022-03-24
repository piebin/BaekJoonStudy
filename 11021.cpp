#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b, c;

	cin >> c;

	int cases[1000][2];


	for (int i = 1; i <= c; i++)
	{
		cin >> a >> b;
		cases[i][1] = a;
		cases[i][2] = b;
	}//in

	for (int i = 1; i <= c; i++)
	{
		cout << "Case #" << i << ":" << " " << cases[i][1] + cases[i][2] << endl;
	}//out




}