#include<iostream>
using namespace std;
class Base
{
public:
	Base ()
	{
		cout << "base�Ĺ��캯������" << endl;

	}
	~Base ()
	{

		cout << "base��������������" << endl;
	}





};

class son:public Base
{
public:
	son()
	{
		cout << "son�Ĺ��캯������" << endl;
	}

	~son()
	{
		cout << "son��������������" << endl;
	}

};
void test01()
{
	//Base b;
	son s;


}


int main()
{


	test01();














	system("pause");
	return 0;
}