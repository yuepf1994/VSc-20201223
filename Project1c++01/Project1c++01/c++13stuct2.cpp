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
		cout << t1[i].name  << "����" << t1[i].age<<"�Ա�" <<t1[i].gender<< endl;
		//cout << "��ʦ" << i << "����" << t1[i].name << endl;
		//for (int j = 0; j < 5; j++)
		//{
		//	cout << "ѧ��" << j << "����" << t1[i].a[j].age << endl;
		//	cout << "ѧ��" << j << "����" << t1[i].a[j].name << endl;
		//}
	}
}

void bubbleSortH(struct Hero * t1, int len)
{
	//struct Hero temp = {"0"};  // ��ʼ��ʧ�ܻᱨ��  ���ܰ����θ�ֵ��string
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
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",25,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

	bubbleSortH(HeroArray,len);
	printALL(HeroArray, len);






	system("pause");
	return 0;
}