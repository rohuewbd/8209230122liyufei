#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "�����ε������߳���";
	cin >> a >> b >> c;
	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		cout << "�������ܳ���" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "�������ǵ���������" << endl;
		}
		else
			cout << "�����β��ǵ���������" << endl;
	}
	else
		cout << "���ܹ���������" << endl;
	return 0;
}