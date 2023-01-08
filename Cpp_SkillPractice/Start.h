
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
	static int count;     //��̬���ݳ�Ա������ͳ��ѧ������
	static float sum;     //��̬���ݳ�Ա������ͳ����ĩ�ۼӳɼ�
	static float ave;     //��̬���ݳ�Ա������ͳ����ĩƽ���ɼ�
public:
	Score(int m, int f);
	~Score();
	static void show_count_sum_ave();   //��̬��Ա����
	void ShowScore();
	friend int getScore(Score& ob);
	friend void ShowShow(Point& pt, Score& sco);
	int add(int x = 0, int y = 0);
	//һ����ĳ�Ա����������Ϊ��һ�������Ԫ
	//һ����ĳ�Ա������Ϊ��һ�������Ԫ����ʱ�������ȶ�������ࡣ������������Ԫ����ʱ����Ҫ���ϳ�Ա�����������������
	
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
	Y yy;  //�Ӷ���
	

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
	//�����һ������˵���˳����ݳ�Ա����ô���캯����ֻ��ͨ����Ա��ʼ���б�Ը����ݳ�Ա���г�ʼ��
};

void Date::showDate() {
	//...
}

void Date::showDate() const {    //���� ������(������) const;
	//...
}

///////////////////////////////////////////////////////////////////



class printData
{
public:
	void print(int i)
	{
		cout << "������" << i << endl;

	
	}
	void print(char c[])
	{
		cout << "�ַ�����" << c << endl;

	}
	void print(double f)
	{
		cout << "��������" << f << endl;

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
