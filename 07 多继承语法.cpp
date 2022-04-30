#include<iostream>
using namespace std;

class base1
{
public:
	base1()
	{
		m_a = 100;

	}
	int m_a;
};
class base2
{
public:
	base2()
	{
		m_a = 200;

	}
	int m_a;
};
class son:public base1,public base2
{
public:
	son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;


};


void tset01()
{
	son s;
	cout << "sizeof s" << sizeof(son) << endl;
	cout << "base1 m_a=" << s.base1::m_a << endl;
	cout << "base2 m_a=" << s.base2::m_a << endl;
}
int main()
{


	tset01();













	system("pause");
	return 0;
}