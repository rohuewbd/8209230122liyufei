#include<iostream>
using namespace std;
int main() {
	int a, b,i,j,k;
	cout << "输入两个正整数：";
	cin >> a >> b;
	for (i = 1;i <= a;i++) 
	{
		if (a % i == 0 && b % i == 0) 
		{
			j = i;
		}
	}
	cout << "最大公约数是：";
	cout << j;
	for (i = a * b;i >= a;i--)
	{
		if (i % a == 0 && i % b == 0) 
		{
			k = i;
		}
	}
	cout << "最小公倍数是：";
	cout << k;
	return 0;
}