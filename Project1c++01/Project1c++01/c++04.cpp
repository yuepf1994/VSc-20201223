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
	cout << a << endl;      //都一样
	cout << &a << endl;
	cout << &a[0] << endl;
	cout << &a + 1 << endl;    //整个数组40个长度后的地址
	cout << &a[0] + 1 << endl;    //第2个元素的地址  第一个元素地址加数据类型长度的地址
	cout << a + 1 << endl;   //和&a[0] + 1 一样

	system("pause");
	return 0;
}