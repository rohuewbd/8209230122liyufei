#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "三角形的三条边长：";
	cin >> a >> b >> c;
	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		cout << "三角形周长：" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "三角形是等腰三角形" << endl;
		}
		else
			cout << "三角形不是等腰三角形" << endl;
	}
	else
		cout << "不能构成三角形" << endl;
	return 0;
}