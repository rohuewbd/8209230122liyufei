#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f, c;
	cout << "�����¶��ǣ�";
	cin >> f;
	c = 5.0/9*(f-32);
	cout << fixed << setprecision(2);
	cout << "��Ӧ�������¶��ǣ�" << c << endl;
	return 0;
}