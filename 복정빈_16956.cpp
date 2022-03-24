#include <iostream>
#include <queue>


using namespace std;

struct wolf
{
	int x, y;
};


char map[500][500];
int r, c;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };



int main()
{
	cin >> r >> c;

	queue <wolf> q;//������ ��ġ�� ���� ť

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> map[i][j];
			//�� �ۼ�

			if (map[i][j] == 'W')
			{
				q.push({ i, j });
			}//������ ��ġ�� ť�� ����
		}
	}

	while (!q.empty())
	{
		int y = q.front().y;
		int x = q.front().x;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			//���밡 �̵��� �� �ִ� ĭ(�����¿�)

			if (nx >= 0 && nx < r && ny >= 0 && ny < c)
			{
				if (map[nx][ny] == '.')
				{
					map[nx][ny] = 'D';
				}//���� �ֺ��� ������� ��� ��Ÿ���� ���븦 �������̰���
				else if (map[nx][ny] == 'S')
				{
					cout << 0 << endl;
					return 0;
				}//���� �ֺ��� ���� ������� ����� ���°����� �Ǵ��ϰ� ����
			}

		}

	}

	cout << 1 << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}

}