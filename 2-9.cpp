#include<iostream>
using namespace std;
int main() 
{
	const float a = 0.8;
	int j=0,i;
	float k = 0;
	for (i = 2;i <= 100;i*=2) 
	{
		k=k+i*a;
		j++;
	}
	float b = k / j;
	cout << "每天平均：" << b;
	return 0;
}