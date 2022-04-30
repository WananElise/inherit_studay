#include<iostream>
using namespace std;
class pasepage
{
public:
	void header()//头部页面
	{
		cout << "首页，公开课，登录，注册.....（公共头部）" << endl;
	};
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图....（公共底部）" << endl;
	}
	void left()
	{
		cout << "jave，python，c++.....（公共分类列表）" << endl;
	}
};

class Java :public pasepage
{
public:
	void content()
	{
		cout << "jave学习视频" << endl;
	}

};
class Python :public pasepage
{
public:
	void content()
	{
		cout << "python学习视频" << endl;
	}

};
class Cpp :public pasepage
{
public:
	void content()
	{
		cout << "c++学习视频" << endl;
	}

};

void test01()
{
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();
	cout << "---------------------------------\t" << endl;
	Python python;
	python.header();
	python.footer();
	python.left();
	python.content();
	cout << "---------------------------------\t" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "---------------------------------\t" << endl;




}








int main()
{

	test01();
	










	system("pause");
	return 0;
}
