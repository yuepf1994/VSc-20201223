#include <iostream>
using namespace std;
#include <string>
struct Hero
{
	string name;
	int age;
	string gender;
};

void printALL(const struct Hero * t1, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << t1[i].name  << "年龄" << t1[i].age<<"性别" <<t1[i].gender<< endl;
		//cout << "老师" << i << "姓名" << t1[i].name << endl;
		//for (int j = 0; j < 5; j++)
		//{
		//	cout << "学生" << j << "年龄" << t1[i].a[j].age << endl;
		//	cout << "学生" << j << "姓名" << t1[i].a[j].name << endl;
		//}
	}
}

void bubbleSortH(struct Hero * t1, int len)
{
	//struct Hero temp = {"0"};  // 初始化失败会报错  不能把整形赋值给string
	struct Hero temp ;
	memset(&temp,0x00,sizeof(struct Hero));

	for (int i=0;i<len-1;i++)
	{
		for (int j=0;j<len-i-1;j++)
		{
			if (t1[j].age>t1[j+1].age)
			{
				temp = t1[j];
				t1[j] = t1[j + 1];
				t1[j + 1] = temp;
			}
		}
	}
}



int main()
{
	struct Hero HeroArray[5] = {
		{"刘备",22,"男"},
		{"张飞",20,"男"},
		{"关羽",21,"男"},
		{"赵云",25,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

	bubbleSortH(HeroArray,len);
	printALL(HeroArray, len);






	system("pause");
	return 0;
}