#include<iostream>
using namespace std;
int main() {
	char am;
	float j, k;
	cout << "�����������";
	cin >> am;
	cout << "������������";
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
			cout << "������0�޷�����";
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
		cout << "������Ƿ�";
		break;
	}
	return 0;
}