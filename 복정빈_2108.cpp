#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>



using namespace std;

int res = 0;
int result = 0;
bool second = false;
int maxn = -4000;
int minn = 4000;
int n;
int nums[500001];
int sum;



int center(int n, int nums[])
{
	sort(nums, nums + n);
	//ũ������� ����
	return nums[n/2];
}


int many(int n, int nums[])
{

	for (int i = 0; i < n; i++)
	{
		if (res <= count(nums, nums + n, nums[i]))
		{
			res = count(nums, nums + n, nums[i]);
		}	

	}
	//���� ���� �󵵼� ã��

	sort(nums, nums + n);
	//������������ ������

	for (int i = 0; i < n; i+=res)
	{
		if (count(nums, nums+n, nums[i])==res)
		{
			result = nums[i];
			
			if (second)
				break;
			second = true;
		}
		
	}
	return result;
	//���� ���� �󵵼��� res�� ���� ���� ���� ã�Ƽ� ù��°�� �н��ϰ� �ι�°���� ���� �� ����
}


int range(int n, int nums[])
{
	for (int i = 0; i < n; i++)
	{
		if (maxn <= nums[i])
			maxn = nums[i];
		//�ִ� ���ϱ�

		if (minn >= nums[i])
			minn = nums[i];
		//�ּڰ� ���ϱ�
	}
	return maxn - minn;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//�ӵ�

	cin >> n;
	sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];

		sum += nums[i];
	}
	//���� �Է¹����鼭 �ձ��ϱ�

	int q1 = round(double(sum) / n);
	//�������� ���� �� �ݿø�

	//cout << q1 << "\n"; //������
	//cout << center(n, nums) << "\n"; //�߾Ӱ�
	//cout << many(n, nums) << "\n"; //�ֺ�
	//cout << range(n, nums) << "\n";

	printf("%d \n", q1);
	printf("%d \n", center(n, nums));
	printf("%d \n", many(n, nums));
	printf("%d \n", range(n, nums));

}