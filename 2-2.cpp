#include<iostream>
using namespace std;
int main() {
	float x, y;
	cout << "xµÄÖµÊÇ£º";
	cin >> x;
	cout << endl;
	if (x > 0 && x < 10) 
	{
		if (x < 5)
		{
			if (x < 1)
			{
				y = 3 - 2 * x;
			}
			else y = 1 + 2 / (4 * x);
		}
		else y = x * x;
		cout << y;
	}
	return 0;
}