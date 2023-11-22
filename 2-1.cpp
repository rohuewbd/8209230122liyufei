#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "ÊäÈëÒ»¸ö×Ö·û£º";
	cin >> a;
	cout << endl;
	int i ;
	i = static_cast<int>(a);
	if (i >= 97 && i <= 122)
	{
		int j = i - 32;
		char b ;
		b = static_cast<char>(j);
		cout << b;
	}
	else cout << i;

	return 0;
}