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
	//s1.m_b = 20;�̳��˱���Ȩ��������ʲ�����

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
	//s2.m_a = 10;����Ȩ�޼̳� ����Ȩ��Ҳ����˱�����
	//s2.m_b = 10;�̳��˱���Ȩ�� ������ʲ�����
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
	//s3.m_a = 10;�̳���˽�б��� ������ʲ�����
	//s3.m_b = 10;�̳���˽�б��� ������ʲ�����

}












int main()
{














	system("pause");
	return 0;
}