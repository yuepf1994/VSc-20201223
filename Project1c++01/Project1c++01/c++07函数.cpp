#include<iostream>
using namespace std;
#include "swapc08.h"

//��������������ֵ����ʱ���������βη����ı䣬������Ӱ��ʵ��
// ������ļ���д  ͷ�ļ�  Դ�ļ�

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
	//cout << *s << endl;   û�з���Ȩ��  ������ȡ���޸�
	

	system("pause");
	return 0;

}

