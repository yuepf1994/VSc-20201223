#include <iostream>
using namespace std;

int main()
{
	/*������ά�����4�ַ�ʽ
	1.�������� ������ �� �� ��
	2.�������� ������ �� ��  = { {1,2},{3,4} };
	3.�������� ������ �� ��  = { 1,2,3,4 };
	4.�������� ������ [] ��  = { 1,2,3,4 };
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
		// cout << arr[x] << endl;   ֱ��������ǵ�ַ  
	}
	cout << arr << endl;
	cout << arr[0] << endl;
	cout << &arr[0][0]<< endl;


	system("pause");
	return 0;
}
