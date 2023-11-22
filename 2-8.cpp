#include<iostream>
using namespace std;
int main() {
	double a, j, k;
	cin >> a;
	k = a, j = k / 2 + a / (2 * k);
	if (a > 0)
	{
		if (j - k > 0)
		{
			while (j - k >= 1e-5)
			{
				k = j;
				j = k / 2 + a / (2 * k);
			}
		}
		else
		{
			while (k - j >= 1e-5)
			{
				k = j;
				j = k / 2 + a / (2 * k);
			}
		}
		cout << "平方根是：" << j;
	}
	if (a < 0) {
		cout << "a<0平方根不存在";
	}
	if(a==0){
		cout << "平方根是0";
	}
	return 0;
}