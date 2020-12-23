#include<iostream>
using namespace std;
int main()
{
	int a[] = {5,45,75,34,600,335,67,325};
	int max = a[0];
	for (int x=1;x<sizeof(a)/sizeof(a[0]);x++)
	{
		max = max > a[x] ? max : a[x];
	}
	cout << max << endl;




	system("pause");
	return 0;
}