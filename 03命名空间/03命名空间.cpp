#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"hello.h"

//�����ռ����ö��˵ķ��������Բ�������
//���������ռ䣬namespace�ؼ���
namespace A
{
	void test()
	{
		cout << "A" << endl;
	}
	int b = 30;
}

namespace B
{
	void test()
	{
		cout << "B" << endl;
	}
	int b = 60;

}

int b = 20;


void test()
{
	int a;

	//ʹ�������ռ��еĳ�Ա
	cout << b << endl;
	cout << A::b << endl;
	cout << B::b << endl;

	A::test();
	B::test();


}
//�����ռ��ע��:
//ע��1�������ռ�ֻ�ܶ�����ȫ��
namespace Maker
{
	int a;
	int b;
	int c;
}

void test02()
{
	//cout << Maker::d << endl;���ܷ���δ��ӵĳ�Ա
	/*namespace Maker2{
		err
	}*/
}

//ע��2�������ռ����Ƕ�������ռ�
namespace Maker2
{
	int a = 20;
	namespace Maker22{
		int a = 22;
		int b=33;
	}
	int b=50;
}

void test03()
{
	cout << Maker2::a <<" "<< Maker2::b << endl;
	cout << Maker2::Maker22::a <<" "<< Maker2::Maker22::b << endl;
}

//ע��3�������ռ�Ŀ�������ʱ�������ӳ�Ա
namespace Maker{
	int d = 20;
}

void test04()
{
	cout << Maker::d << endl;
}

//ע��4:���������ռ�
namespace{
	int coun = 0;
}
void test05()
{
	cout << ::coun << endl;
}

//ע��5�����Ը������ռ�ȡ����
void test06()
{
	//������               ������
	namespace nameMaker = Maker;

	cout << nameMaker::d << endl;
}

//ע��6�����ļ���дʱ�����������������ռ��ڣ���ô.cppʵ��ʱҲҪ���������ռ�
void test07()
{
	space1::func();
}
int main()
{
	test07();
	system("pause");
	return EXIT_SUCCESS;
}

