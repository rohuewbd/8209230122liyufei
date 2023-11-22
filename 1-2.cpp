#include<iostream>
using namespace std;
#define pai 3.14
int main() {
	double V,r,h;
	cout << "圆锥的半径，锥高是：";
	cin >> r >> h;
	V = r * r * h * pai / 3;
	cout << "圆锥的体积是：";
	cout << V << endl;
	return 0;
}