#include <iostream>
#include <vector>

using namespace std;

int gen()//���� �����ϱ�
{
	vector<int> v; //intŸ�� ����
	vector<int> v = { 1, 2, 3 }; //int tyoe vector ini(1, 2, 3)
	vector<int> v[10]; //int type vector size 10
	vector<int> v[] = { {1, 2}, {3, 4} };//int type vector, �� ���� �� ����
	vector<vector<int>> v;//2���� ���� �� �� ����
	vector<int> v(5);//5�� 0���� �ʱ�ȭ
	vector<int> v(5, 3);//5�� 3���� �ʱ�ȭ
	vector<int> v2(v);//���� v�����ؼ� v2����

}

int plus()//���Ϳ� �� �߰�
{
	vector<int> v;

	v.push_back(10);//�ڿ� 10�߰�

	vector<int>::iterator it = v.begin();
	//v��� ������ �� ó���� ����Ŵ ������..?->�ݺ��ڶ�� ��.
	it = v.insert(it, 2); //�Ǿտ� 2����
	it = v.insert(it, 2, 3); //�� �տ� 3�� 2�� ����
	it = v.insert(it + 2, 2, 4); //2��°���� 4�� 2�� ����


}

int minus() 
{
	vector<int> v;

	v.pop_back();//������ �� ����
	v.erase(v.begin() + 10); //10��° �ε��� �� ����
	v.erase(v.begin(), v.begin() + 5); //0������ 5������ ����
	v.clear();//��ü ����
}

int print()
{
	vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << v[2] << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
}

int main()
{
	vector<int> v1;
	//int�� v1�̶�� ���� ����

	for (int i = 1; i <= 5; i++)
		v1.push_back(i);
	//1���� 5���� ä��


	for (auto i = v1.begin(); i != v1.end(); ++i)
		cout << *i << " ";
	//auto = ������ Ÿ���� �ڵ����� ������.
	//v1�� ���ۺ��� ������ �� �����.

	cout << "\n";
	for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
		cout << *ir << " ";
	//�ڿ������� �ձ��� �� �����.

	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	//0���� ������ �����

	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";
	//0��°���� ������ ���.

	return 0;
}