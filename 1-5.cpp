#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f, c;
	cout << "华氏温度是：";
	cin >> f;
	c = 5.0/9*(f-32);
	cout << fixed << setprecision(2);
	cout << "对应的摄氏温度是：" << c << endl;
	return 0;
}