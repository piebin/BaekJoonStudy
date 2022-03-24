#include <iostream>
#include <queue>

using namespace std;

int n, k;
int trace[100000];
queue<int> q;//ť ����

int bfs()
{
	q.push(n);//������ ��ġ ť�� �Է�
	trace[n] = 0; //�̵�Ƚ��
	while (!q.empty())
	{
		int p = q.front(); //p�� ť���� ���� �տ� �ִ� ������ ��� ������Ʈ.
		q.pop();
		//ť���� ���� �տ� �ִ� �� ������Ʈ �� pop.
		if (p == k)
			return trace[p];
		//p=������ ��ġ�� ������ ��ġ�� ���������� �Էµ� Ƚ�� return.

		if (p - 1 >= 0 && trace[p - 1] == 0/*�ߺ� ��������*/)
		{
			q.push(p - 1);
			trace[p - 1] = trace[p] + 1;
		}
		if (p + 1 <= 100000 && trace[p + 1] == 0)
		{
			q.push(p + 1);
			trace[p + 1] = trace[p] + 1;
		}
		if (p * 2 <= 100000 && trace[2 * p] == 0)
		{
			q.push(p * 2);
			trace[p * 2] = trace[p] + 1;
		}

		//ť�� ������ ��ġ p���� ��� ������Ѽ� ���� ������Ʈ ��. trace[������Ʈ �� ���ο� p��]�� ������Ʈ Ƚ����ŭ ������.->ī���� ����.
		//����ؼ� ������Ʈ �� ������ ��ġ p���� �ᱹ ������ ��ġ k���� ���������� ī���õ� trace[p]���� return��.
	}
}


int main()
{
	cin >> n >> k;
	cout << bfs();
	return 0;
}