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

void test1()//����Ҫ����ָ������ã��򱨴�thisָ���ڲ�����ָ������ã��������Ա����ʱ�����Ϊ�գ���������Ҫ�����ã��Ͳ���Ϊ�ա�
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
	
	Date()//����һ���յĹ��캯��
	{

	}
	Date(int year, int month, int day)//����һ�����εĹ��캯��
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
	Date d1;//�����޲εĹ��캯����ע����治�ӣ�����Ҫ�Ǽ��Ͼͱ����һ������ֵΪDate�ĺ�����
	Date d2(2019, 3, 4);//�����вι��캯��
	
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