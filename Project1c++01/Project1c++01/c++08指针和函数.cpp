#include <iostream>
#include<cstring>
using namespace std;
//—°‘Ò≈≈–Ú   ∑«√∞≈›≈≈–Ú
void bubble(char * arr,int len)
{
	strcpy_s(arr, 10,"644646946");
	for (int i=0;i<len;i++)
	{
		for (int j=i+1;j<len;j++)
		{
			if (arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//for (int i = 0; i < len; i++)
	//{
	//	for (int j = 1; j < len - i; j++)
	//	{
	//		if (*arr[i] > *arr[j])
	//		{
	//			int temp = *arr[i];
	//			*arr[i] = *arr[j];
	//			*arr[j] = temp;
	//		}
	//	}
	//}
	for (int x=0;x<len;x++)
	{
		cout << arr[x] << endl;
	}
}



int main()
{
	//int arr1[10] = {111,22,3,44,35,6,57,8,19,10};
	char s[10] = "asfgasoig";


	//int *p = &arr[0];
	bubble(s, 10);

	for (int x = 0; x < 10; x++)
	{
		cout << s[x] << endl;
	}

	system("pause");
	return 0;
}
