#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name;
	int age;

};

struct Teacher
{
	string name;
	int age;
	struct Student a[5];
};

void setTeac(struct Teacher *t1,int len)
{
	string temp = "ABCDE";
	for (int i = 0; i<len;i++)
	{
		
		t1[i].age = 10;
		t1[i].name = "Teacher_";   
		t1[i].name +=temp[i];
		//t1[i].name ="Teacher_"+ temp[i];  写一起就不行
		for (int j=0;j<5;j++)
		{
			t1[i].a[j].age = 11;
			t1[i].a[j].name= "Stu_" + t1[i].name  +"_"+ temp[j];
		};
	}
}
void printALL(struct Teacher * t1,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师"<<i <<"年龄"<< t1[i].age <<endl;
		cout << "老师" << i << "姓名" << t1[i].name << endl;
		for (int j=0;j<5;j++)
		{
			cout << "学生" << j << "年龄" << t1[i].a[j].age << endl;
			cout << "学生" << j << "姓名" << t1[i].a[j].name << endl;
		}
	}
}

int main()
{
	struct Student st1 = {"s1",2};


	string as = "sdasdasd" ;
	string as2 = "sdasdasd"+as;
	//cout << as2 << endl;

	struct Teacher tc1[3];
	setTeac(tc1,3);

	printALL(tc1,3);
	system("pause");
	return 0;
}