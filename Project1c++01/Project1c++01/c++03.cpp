#include <iostream>
#include <iomanip>
using namespace std;
//水仙花数

int main()
{

	//int a, b, c = 0;
	//int num = 100 ;
	//while (num<1000)
	//{
	//	a = num % 10;
	//	b = num / 10 % 10;
	//	c = num / 100;
	//	int sum = a * a*a + b * b*b + c * c*c;
	//	if (sum == num)
	//		cout << sum << endl;
	//	num++;
	//}

	//乘法口诀表
	for (int i=1;i<10;i++)
	{
		for(int j = 1; j <=i;j++ )
		{
			//格式化输出
			//cout << i << "x" << j << "="<<setw(2)<< left << i * j << " ";
			cout << i << "x" << j << "=" << i * j << " \t";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}

