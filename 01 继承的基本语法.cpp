#include<iostream>
using namespace std;
class pasepage
{
public:
	void header()//ͷ��ҳ��
	{
		cout << "��ҳ�������Σ���¼��ע��.....������ͷ����" << endl;
	};
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ....�������ײ���" << endl;
	}
	void left()
	{
		cout << "jave��python��c++.....�����������б�" << endl;
	}
};

class Java :public pasepage
{
public:
	void content()
	{
		cout << "javeѧϰ��Ƶ" << endl;
	}

};
class Python :public pasepage
{
public:
	void content()
	{
		cout << "pythonѧϰ��Ƶ" << endl;
	}

};
class Cpp :public pasepage
{
public:
	void content()
	{
		cout << "c++ѧϰ��Ƶ" << endl;
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
