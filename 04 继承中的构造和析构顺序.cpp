#include<iostream>
using namespace std;
class Base
{
public:
	Base ()
	{
		cout << "base的构造函数调用" << endl;

	}
	~Base ()
	{

		cout << "base的析构函数调用" << endl;
	}





};

class son:public Base
{
public:
	son()
	{
		cout << "son的构造函数调用" << endl;
	}

	~son()
	{
		cout << "son的析构函数调用" << endl;
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