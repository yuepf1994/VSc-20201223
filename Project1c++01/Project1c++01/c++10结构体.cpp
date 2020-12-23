#include <iostream>
using namespace std;
#include <string >
struct Stu
{
	string name;
	int age;

};
int main()
{
	struct Stu s1;
	s1.age = 123;
	s1.name = "name2";
	struct Stu *s2 = &s1;

	cout <<s1.age  <<s1.name  <<endl;
	cout << s2->age << s2->name << endl;


	system("pause");
	return 0;
}