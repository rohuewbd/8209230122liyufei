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
		cout << "ƽ�����ǣ�" << j;
	}
	if (a < 0) {
		cout << "a<0ƽ����������";
	}
	if(a==0){
		cout << "ƽ������0";
	}
	return 0;
}