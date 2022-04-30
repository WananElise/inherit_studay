#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		m_a = 100;
	};
	int m_a;

	void func(int a = 10)
	{
		cout << "base 成员函数调用" << endl;
	}
};

class son :public base
{
public:
	int m_a;
	son()
	{
		m_a = 200;
	}
	void func()
	{
		cout << "son 成员函数调用" << endl;
	}

};

void test01()
{
	son Son;
	cout << "son 下的 m_a" << Son.m_a << endl;
	cout << "base 下的 m_a" << Son.base::m_a << endl;
}
void test02()
{
	son s;
	s.func();
	s.base::func();
}

int main()
{



	/*test01();*/

	test02();













	system("pause");
	return 0;
}