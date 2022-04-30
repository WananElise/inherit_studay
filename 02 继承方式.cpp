#include<iostream>
using namespace std;
class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;





};
class son1 :public base
{
public:
	void func()
	{
		m_a = 10;
		m_b = 20;
	}

};
void test01()
{
	son1 s1;
	s1.m_a = 10;
	//s1.m_b = 20;继承了保护权限类外访问不到；

}
class son2 :protected base
{
public:
	void func()
	{
		m_a = 10;
		m_b = 20;
		
	}

};
void test02()
{
	son2 s2;
	//s2.m_a = 10;保护权限继承 公共权限也变成了保护；
	//s2.m_b = 10;继承了保护权限 类外访问不到；
}

class son3 :private base
{
public:
	void func()
	{
		m_a = 10;
		m_b = 20;
	}


};

void tset03()
{
	son3 s3;
	//s3.m_a = 10;继承了私有保护 类外访问不到；
	//s3.m_b = 10;继承了私有保护 类外访问不到；

}












int main()
{














	system("pause");
	return 0;
}