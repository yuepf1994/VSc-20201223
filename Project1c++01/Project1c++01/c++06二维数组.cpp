#include <iostream>
using namespace std;

int main()
{
	/*声明二维数组的4种方式
	1.数据类型 数组名 行 列 ；
	2.数据类型 数组名 行 列  = { {1,2},{3,4} };
	3.数据类型 数组名 行 列  = { 1,2,3,4 };
	4.数据类型 数组名 [] 列  = { 1,2,3,4 };
	*/

	int arr[][3] = {1,2,3,4,5,6,7,8};

	int row = sizeof(arr) / sizeof(arr[0]);
	int column = sizeof(arr[0]) / sizeof(arr[0][0]);

	cout << row << "   "<<column << endl;
	for(int x = 0;x<row;x++ )
	{
		for (int y =0;y<column ;y++)
		{
			cout << arr[x][y] << endl;

		}
		// cout << arr[x] << endl;   直接输出的是地址  
	}
	cout << arr << endl;
	cout << arr[0] << endl;
	cout << &arr[0][0]<< endl;


	system("pause");
	return 0;
}
