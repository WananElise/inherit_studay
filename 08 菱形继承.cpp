#include<iostream>
using namespace std;
class animals
{
public:
	int m_age;
};
class sheep:virtual public animals
{
public:
};
class tuo :virtual public animals
{

};
class sheeptuo :public sheep, public tuo
{


};



void test01()
{
	sheeptuo st;
	st.sheep::m_age = 18;
	st.tuo::m_age = 20;

	cout << "st.m_age=" << st.m_age << endl;
}
int main()
{
	test01();


	system("pause");
	return 0;
}