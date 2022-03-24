#include <iostream>
#include <queue>

using namespace std;

struct shark {
	int x, y;
};

int n, m, sol;
int map[50][50];
queue < shark> q;
//x�� y���� ���� shark�� ���� �� �ִ� ť

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//������ �� �ִ� x���� y��

void bfs()
{
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		//bfsŽ�� ���� ť�� �� �տ� �ִ� ���� x�� y�� �����ϰ� pop


		for (int k = 0; k < 8; k++) //8���� ���� �̵� ����
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			//�̵��� ĭ�� ���ο� x�� y

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (!map[nx][ny])
			{
				q.push({ nx, ny });
				map[nx][ny] = map[x][y] + 1;
				//ť�� x, y�� push�� ���� �̵� Ƚ�� �߰�
			}

		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j])
				q.push({ i, j });
			//���� �� ������ ���� �� �ִ� ��ġ�� ť�� push
		}
	}
	bfs();
	//ť�� �ִ°��� �� pop�ϰ� map�� �� ĭ�� �����Ÿ��� ����
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (sol < map[i][j])
			{
				sol = map[i][j];
			}//���� �� �Ÿ��� ã��

		}
	}
	cout << sol - 1 << endl;
	//�� �ִ� ĭ�� �����Ÿ��� 1�� �����صּ� �ٸ� ĭ�� �����Ÿ� ��� 1�� �� ����������
	return 0;
}