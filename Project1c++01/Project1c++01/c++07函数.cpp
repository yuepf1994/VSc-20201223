#include<iostream>
using namespace std;
#include "swapc08.h"

//函数，当我们做值传递时，函数的形参发生改变，并不会影像实参
// 程序分文件编写  头文件  源文件

int main()
{

	int a = 10;
	int b = 20;
	swap(a, b);
	//cout << sum(2, 3) << endl;


	int * p = NULL;
	cout << sizeof(p) << endl;
	int * s = (int *)0xffffff;
	cout << s << endl;
	//cout << *s << endl;   没有访问权限  包括读取和修改
	

	system("pause");
	return 0;

}

