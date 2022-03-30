#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(pair<int, string> a, pair<int, string> b)
{
	if (a.first < b.first)
	{
			return true;
	}
	else
		return false;
	
}//������������ ���� ������������ ���� ���� ����

int main()
{
	int n;
	cin >> n;
	vector<pair<int, string>> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}

	stable_sort(arr.begin(), arr.end(), compare);
	//arr�� ������ ó������ ������ ����
	//arr������ �ȿ� �ִ� tmp�� first�� �켱 ���������ϴµ� �̶� ������ ���� ������� ���� ���� ����->���Լ� ����.

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}



}