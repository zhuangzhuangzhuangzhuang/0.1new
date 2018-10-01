#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"hello.h"

//命名空间是让多人的方法和属性不会重名
//定义命名空间，namespace关键字
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

	//使用命名空间中的成员
	cout << b << endl;
	cout << A::b << endl;
	cout << B::b << endl;

	A::test();
	B::test();


}
//命名空间的注意:
//注意1：命名空间只能定义在全局
namespace Maker
{
	int a;
	int b;
	int c;
}

void test02()
{
	//cout << Maker::d << endl;不能访问未添加的成员
	/*namespace Maker2{
		err
	}*/
}

//注意2：命名空间可以嵌套命名空间
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

//注意3：命名空间的开发，随时可以增加成员
namespace Maker{
	int d = 20;
}

void test04()
{
	cout << Maker::d << endl;
}

//注意4:匿名命名空间
namespace{
	int coun = 0;
}
void test05()
{
	cout << ::coun << endl;
}

//注意5：可以给命名空间取别名
void test06()
{
	//新名字               旧名字
	namespace nameMaker = Maker;

	cout << nameMaker::d << endl;
}

//注意6：分文件编写时，函数声明在命名空间内，那么.cpp实现时也要增加命名空间
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

