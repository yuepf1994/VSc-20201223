#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name;
	int age;
};

//����ָ�룬�����ڴ�ʹ�ã���ʡ�ռ䣬
void printStruct1(const Student *p)
{
	//p->age=22;  ����const  һ���޸ľͻᱨ��  ��ֹ���޸Ĳ���
	cout << p->name << p->age<<endl;


}



int main()
{
	
	Student s1 = {"С��",20};
	printStruct1(&s1);
	cout << sizeof(double *)<<endl;  //sting ռ28���ֽڴ�С   x64λ 40byte

	//cout <<s1<<endl;





	system("pause");
	return 0;
}