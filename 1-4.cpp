#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;
	float a = 1.25;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	cout << "output in int type:" << static_cast<int>(a) << endl;
	system("pause");
	return 0;
}