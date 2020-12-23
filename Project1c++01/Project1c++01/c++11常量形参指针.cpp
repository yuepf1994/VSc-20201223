#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name;
	int age;
};

//传入指针，减少内存使用，节省空间，
void printStruct1(const Student *p)
{
	//p->age=22;  加入const  一旦修改就会报错  防止误修改操作
	cout << p->name << p->age<<endl;


}



int main()
{
	
	Student s1 = {"小明",20};
	printStruct1(&s1);
	cout << sizeof(double *)<<endl;  //sting 占28个字节大小   x64位 40byte

	//cout <<s1<<endl;





	system("pause");
	return 0;
}