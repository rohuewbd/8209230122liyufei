#include<iostream>
using namespace std;
int main() {
	int a, b,i,j,k;
	cout << "����������������";
	cin >> a >> b;
	for (i = 1;i <= a;i++) 
	{
		if (a % i == 0 && b % i == 0) 
		{
			j = i;
		}
	}
	cout << "���Լ���ǣ�";
	cout << j;
	for (i = a * b;i >= a;i--)
	{
		if (i % a == 0 && i % b == 0) 
		{
			k = i;
		}
	}
	cout << "��С�������ǣ�";
	cout << k;
	return 0;
}