#include<iostream>
using namespace std;
#include<string>
//timeϵͳʱ��ͷ�ļ�
#include <ctime>


int main()
{
	//int a = 0;
	//cout<< "����a" <<endl;
	//cin >> a;
	//cout << a << endl;

	//double d = 0;
	//cout << "˫����a" << endl;
	//cin >> d;
	//cout << d << endl;

	//string s="";
	//cout << "�ַ���a" << endl;
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
	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ�ζ�һ��,����ϵͳʱ���㹻��ȷ
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