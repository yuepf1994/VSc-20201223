#include <iostream>
using namespace std;

int main()
{
	//int arr[8] = { NULL};
	////memset(arr,NULL,sizeof(arr));
	//int y = sizeof(arr) / sizeof(int);
	//cout << y << endl;
	//for (int x=0;x<y;x++)
	//{
	//	cout <<"["<< arr[x]<<"]"<<endl;
	//}
	int a[10] = { 0 };
	int len = sizeof(a) / sizeof(a[0]);
	cout << len << endl;
	cout << a << endl;      //��һ��
	cout << &a << endl;
	cout << &a[0] << endl;
	cout << &a + 1 << endl;    //��������40�����Ⱥ�ĵ�ַ
	cout << &a[0] + 1 << endl;    //��2��Ԫ�صĵ�ַ  ��һ��Ԫ�ص�ַ���������ͳ��ȵĵ�ַ
	cout << a + 1 << endl;   //��&a[0] + 1 һ��

	system("pause");
	return 0;
}