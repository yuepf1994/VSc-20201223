#include<iostream>
using namespace std;
#include<string>
//time系统时间头文件
#include <ctime>


int main()
{
	//int a = 0;
	//cout<< "整数a" <<endl;
	//cin >> a;
	//cout << a << endl;

	//double d = 0;
	//cout << "双精度a" << endl;
	//cin >> d;
	//cout << d << endl;

	//string s="";
	//cout << "字符串a" << endl;
	//cin >> s;
	//cout << s << endl;

	//int  b1 = -7;
	//int  b2 = 2;
	//cout << b1 % b2 << endl;

	//int a = 0;
	//a = a++ + ++a;
	//cout << a <<endl;
	//int a = 10;
	//a %= 3;
	//cout << a << endl;
	//添加随机数种子，利用当前系统时间生成随机数，防止每次都一样,看来系统时间足够精确
	srand((unsigned int)time(NULL));

	for (int x=0;x<10;x++)
	{
		int r = rand() % 100 + 1;
		cout << r << endl;
	}



	//cout << r << endl;

	system("pause");

	return 0;
}