
#include "Start.h"


////////////////////////////////////////////////////////////

Score::Score(int m, int f)
{
	mid_exam = m;
	fin_exam = f;
	++count;
	sum += fin_exam;
	ave = sum / count;
}

Score::~Score()
{

}
void ShowShow(Point &pt, Score &sco)
{
	cout << "Point：" << pt.x * pt.x + pt.y * pt.y << endl;
	cout << "MidScore：" << sco.mid_exam << endl << "FinScore：" << sco.fin_exam << endl;



}






/*** 静态成员初始化 ***/
int Score::count = 0;
float Score::sum = 0.0;
float Score::ave = 0.0;

void Score::show_count_sum_ave()
{
	cout << "学生人数: " << count << endl;
	cout << "期末累加成绩: " << sum << endl;
	cout << "期末平均成绩: " << ave << endl;
}


/*	
	有时为了访问类的私有成员而需要在程序中多次调用成员函数，
	这样会因为频繁调用带来较大的时间和空间开销，从而降低程序的运行效率。
	为此，C++提供了友元来对私有或保护成员进行访问。友元包括友元函数和友元类。
*/
int getScore(Score& ob) //不是成员函数,不必像成员函数那样，在函数名前加上“类名::”。
{
	return (int)(0.3 * ob.mid_exam + 0.7 * ob.fin_exam);

}

int Score::add(int a, int b)
{
	return a + b;

}

///////////////////////////////////////////////////////////////

class Person
{
private:
	string name;
	string id_number;
	int age;
public:
	Person(string name1, string id_number1, int age1)
	{
		name = name1;
		id_number = id_number1;
		age = age1;

	}
	~Person()
	{

	}
	void show()
	{
		cout << "名字：" << name << endl;
		cout << "身份证号： " << id_number << endl;
		cout << "年龄：" << age << endl;

	}

};

class Student:public Person
{
private:
	int credit;
public:
	Student(string name1, string id_number1, int age1, int credit1) :Person(name1, id_number1, credit1)
	{
		credit = credit1;

	}
	~Student()
	{
	
	}
	void show()
	{
		Person::show();
		cout << "学分：" << credit << endl;

	}


};



class Base
{
protected:
	int a;
public:
	Base()
	{
		a = 5;
		cout << "Base a = " << a << endl;
	}

};

class Base1 :virtual public Base
{
public:
	Base1()
	{
		a = a + 10;
		cout << "Base1 a = " << a << endl;
	
	}
	


};

class Base2 :virtual public Base
{
public:
	Base2()
	{
		a = a + 20;
		cout << "Base2 a =" << a << endl;
	}


};

class Derived :public Base1, public Base2
{
public:
	Derived()
	{
		cout << "Base1::a = " << Base1::a << endl;
		cout << "Base2::a = " << Base2::a << endl;
	}


};

////////////////////////////////////////////////////////////////////////////////////////////////////////





int main(void)
{
	/*
	Box Box1;
	Box Box2;
	Box Box3;
	double volume = 0.0;

	Box1.setBreadth(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	Box2.setLength(2.0);
	Box2.setBreadth(3.0);
	Box2.setHeight(5.0);

	// Box1 的体积
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	// Box2 的体积
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	Box3 = Box1 + Box2;

	// Box3 的体积
	volume = Box3.getVolume();
	cout << "Volume of Box3 : " << volume << endl;

	return 0;
	*/

	/*
	Shape* shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);

	// 存储矩形的地址
	shape = &rec;
	// 调用矩形的求面积函数 area
	shape->area();

	// 存储三角形的地址
	shape = &tri;
	// 调用三角形的求面积函数 area
	shape->area();


	return 0;
	*/























}



















