#include<iostream>
using namespace std;
class base
{
public:
	static int m_a;
	static void func()
	{
		cout << "base-static void func()" << endl;
	}
};
int base::m_a = 100;
class son:public base
{
public:
	static int m_a;
	static void func()
	{
		cout << "son-static void func()" << endl;
	}
};
int son::m_a = 200;
//ͬ����̬��Ա����
void test01()
{
	//ͨ���������
	cout << "ͨ��������ʣ� " << endl;
	son s;
	cout << "son �� m_a=" << s.m_a << endl;
	cout << "base �� m_a=" << s.base::m_a << endl;
	//ͨ����������
	cout << "ͨ���������ʣ� " << endl;
	cout << "son �� m_a=" << son::m_a << endl;
	cout << "base �� m_a=" <<son:: base::m_a << endl;
}
//ͬ����̬��Ա����
void test02()
{
	son s;
	s.func();
	s.base::func();
	son::func();
	son::base::func();
}
int main()
{
	//test01();


	test02();















	system("pause");
	return 0;
}