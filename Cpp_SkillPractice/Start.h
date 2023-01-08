
#ifndef _START_H
#define _START_H
#include <iostream>
#include <string>
using namespace std;
class Point;

class Score
{
private:
	int mid_exam;
	int fin_exam;
	static int count;     //静态数据成员，用于统计学生人数
	static float sum;     //静态数据成员，用于统计期末累加成绩
	static float ave;     //静态数据成员，用于统计期末平均成绩
public:
	Score(int m, int f);
	~Score();
	static void show_count_sum_ave();   //静态成员函数
	void ShowScore();
	friend int getScore(Score& ob);
	friend void ShowShow(Point& pt, Score& sco);
	int add(int x = 0, int y = 0);
	//一个类的成员函数可以作为另一个类的友元
	//一个类的成员函数作为另一个类的友元函数时，必须先定义这个类。并且在声明友元函数时，需要加上成员函数所在类的类名；
	
};


class Point
{
public:
	int x;
	int y;
	Point(int x1, int y1) :x(x1), y(y1)
	{

	}
	int getDistance()
	{
		return x * x + y * y;

	}
	
	friend int Score::add(int a, int b);
	friend void ShowShow(Point& pt, Score& sco);
};

class X;
class Y
{
public:
	int IDc = 3;
	int IDd = 4;
	void add(X &a);
};


class X
{
	//friend Y;
	
public:
	
	int IDa = 1;
	int IDb = 2;
	Y yy;  //子对象
	

};

/// ////////////////////////////////


class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {

	}
	void showDate();
	void showDate() const;
	//如果在一个类中说明了常数据成员，那么构造函数就只能通过成员初始化列表对该数据成员进行初始化
};

void Date::showDate() {
	//...
}

void Date::showDate() const {    //类型 函数名(参数表) const;
	//...
}

///////////////////////////////////////////////////////////////////



class printData
{
public:
	void print(int i)
	{
		cout << "整数：" << i << endl;

	
	}
	void print(char c[])
	{
		cout << "字符串：" << c << endl;

	}
	void print(double f)
	{
		cout << "浮点数：" << f << endl;

	}


};


class Box
{
public:
	double getVolume(void)
	{
		return length * breadth * height;
	}
	void setLength(double len)
	{
		length = len;
	}
	void setBreadth(double bre)
	{
		breadth = bre;
	
	}
	void setHeight(double hei)
	{
		height = hei;
	}
	Box operator+(const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;

	
	}


private:
	double length;
	double breadth;
	double height;



};



class Shape
{
protected:
	int width, height;
public:
	Shape(int a = 0, int b = 0)
	{
		width = a;
		height = b;
	}
	virtual int area()
	{
		cout << "Parent class area : " << endl;
		return 0;

	}
	void setWidth(int w)
	{
		width = w;

	}
	void setHeight(int h)
	{
		height = h;
	}


};


class Rectangle :public Shape 
{
public:
	Rectangle(int a = 0, int b = 0) :Shape(a, b) {}
	int area()
	{
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}

};
class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) :Shape(a, b) { }
	int area()
	{
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};

































#endif
