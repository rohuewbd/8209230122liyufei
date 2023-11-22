#include<iostream>
using namespace std;
int main() {
	char am;
	float j, k;
	cout << "输入运算符：";
	cin >> am;
	cout << "输入两个数：";
	cin >> j >> k;
	switch (am)
	{
	case'+':
			cout<< j + k;
			break;
	case'-':
		cout << j - k;
		break;
	case'*':
		cout << j * k;
		break;
	case'/':
		if (k == 0) {
			cout << "除数是0无法计算";
			break;
		}
		else {
			cout << j / k;
			break;
		}
	case'%':
	{int i = static_cast<int>(j), d = static_cast<int>(k);
	cout << i % d;
	break;
	}
	default:
		cout << "运算符非法";
		break;
	}
	return 0;
}