
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
	cout << "Point��" << pt.x * pt.x + pt.y * pt.y << endl;
	cout << "MidScore��" << sco.mid_exam << endl << "FinScore��" << sco.fin_exam << endl;



}






/*** ��̬��Ա��ʼ�� ***/
int Score::count = 0;
float Score::sum = 0.0;
float Score::ave = 0.0;

void Score::show_count_sum_ave()
{
	cout << "ѧ������: " << count << endl;
	cout << "��ĩ�ۼӳɼ�: " << sum << endl;
	cout << "��ĩƽ���ɼ�: " << ave << endl;
}


/*	
	��ʱΪ�˷������˽�г�Ա����Ҫ�ڳ����ж�ε��ó�Ա������
	��������ΪƵ�����ô����ϴ��ʱ��Ϳռ俪�����Ӷ����ͳ��������Ч�ʡ�
	Ϊ�ˣ�C++�ṩ����Ԫ����˽�л򱣻���Ա���з��ʡ���Ԫ������Ԫ��������Ԫ�ࡣ
*/
int getScore(Score& ob) //���ǳ�Ա����,�������Ա�����������ں�����ǰ���ϡ�����::����
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
		cout << "���֣�" << name << endl;
		cout << "���֤�ţ� " << id_number << endl;
		cout << "���䣺" << age << endl;

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
		cout << "ѧ�֣�" << credit << endl;

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

	// Box1 �����
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	// Box2 �����
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	Box3 = Box1 + Box2;

	// Box3 �����
	volume = Box3.getVolume();
	cout << "Volume of Box3 : " << volume << endl;

	return 0;
	*/

	/*
	Shape* shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);

	// �洢���εĵ�ַ
	shape = &rec;
	// ���þ��ε���������� area
	shape->area();

	// �洢�����εĵ�ַ
	shape = &tri;
	// ���������ε���������� area
	shape->area();


	return 0;
	*/























}



















