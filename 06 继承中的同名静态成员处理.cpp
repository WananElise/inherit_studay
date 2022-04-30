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
//同名静态成员属性
void test01()
{
	//通过对象访问
	cout << "通过对象访问： " << endl;
	son s;
	cout << "son 下 m_a=" << s.m_a << endl;
	cout << "base 下 m_a=" << s.base::m_a << endl;
	//通过类名访问
	cout << "通过类名访问： " << endl;
	cout << "son 下 m_a=" << son::m_a << endl;
	cout << "base 下 m_a=" <<son:: base::m_a << endl;
}
//同名静态成员函数
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