#include <iostream>
#include <vector>

using namespace std;

int gen()//벡터 생성하기
{
	vector<int> v; //int타입 벡터
	vector<int> v = { 1, 2, 3 }; //int tyoe vector ini(1, 2, 3)
	vector<int> v[10]; //int type vector size 10
	vector<int> v[] = { {1, 2}, {3, 4} };//int type vector, 열 고정 행 가변
	vector<vector<int>> v;//2차원 벡터 둘 다 가변
	vector<int> v(5);//5개 0으로 초기화
	vector<int> v(5, 3);//5개 3으로 초기화
	vector<int> v2(v);//벡터 v복사해서 v2생성

}

int plus()//벡터에 값 추가
{
	vector<int> v;

	v.push_back(10);//뒤에 10추가

	vector<int>::iterator it = v.begin();
	//v라는 벡터의 맨 처음을 가르킴 포인터..?->반복자라고 함.
	it = v.insert(it, 2); //맨앞에 2삽입
	it = v.insert(it, 2, 3); //맨 앞에 3을 2개 삽입
	it = v.insert(it + 2, 2, 4); //2번째부터 4를 2개 삽입


}

int minus() 
{
	vector<int> v;

	v.pop_back();//마지막 값 제거
	v.erase(v.begin() + 10); //10번째 인덱스 값 제거
	v.erase(v.begin(), v.begin() + 5); //0번부터 5번까지 제거
	v.clear();//전체 제거
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
	//int형 v1이라는 벡터 생성

	for (int i = 1; i <= 5; i++)
		v1.push_back(i);
	//1부터 5까지 채움


	for (auto i = v1.begin(); i != v1.end(); ++i)
		cout << *i << " ";
	//auto = 변수의 타입을 자동으로 정해줌.
	//v1의 시작부터 끝까지 다 출력함.

	cout << "\n";
	for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
		cout << *ir << " ";
	//뒤에서부터 앞까지 다 출력함.

	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	//0부터 끝까지 출력함

	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";
	//0번째부터 끝까지 출력.

	return 0;
}