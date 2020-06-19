#include<iostream>
using namespace std;
/*1
class Date
{
public:
	void display()
	{
		cout << "display" << endl;
	}
	void play()
	{
		cout << _a << endl;
	}
private:
	int _a;
};

void test1()//若是要发生指针解引用，则报错。this指针在不发生指针解引用（访问类成员）的时候可以为空，但是若是要解引用，就不能为空。
{
	Date *p = nullptr;
//	p->display();
//	p->play();
//	p->display();
}
*/


/*2
class Date
{
public:
	
	Date()//创建一个空的构造函数
	{

	}
	Date(int year, int month, int day)//创建一个带参的构造函数
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};

void test2()
{
	Date d1;//调用无参的构造函数，注意后面不加（），要是加上就变成了一个返回值为Date的函数。
	Date d2(2019, 3, 4);//调用有参构造函数
	
}*/

int func(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);
	}
	return count;
}

void test3()
{
	int a = func(9999);
	cout<<a<<endl;

}
void test4()
{
	int i = 1;
	if (i <= 0)
		printf("****\n");
	else
		printf("%%***%&**%%\n");
}
/*5
struct A{
	void foo(){ printf("foo"); }
	virtual void bar(){ printf("bar"); }
	A(){ bar(); }
};
struct B :A{
	void foo(){ printf("b_foo"); }
	void bar(){ printf("b_bar"); }
};
void test5()
{
	A *p = new B;
	p->foo();
	p->bar();
}*/


int fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * fun(n + 1);
}

void test6()
{
	cout << fun(2) << endl;
}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	system("pause");
	return 0;
}