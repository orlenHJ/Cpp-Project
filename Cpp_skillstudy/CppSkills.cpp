

#define _CRT_SECURE_NO_WARNINGS
//避免strcpy,strcat等函数安全性过低，会报警告

#include <iostream>
#include<string>
using namespace std;

typedef int feet;
#include "ticketmachine.h"
int add(int x, int y);






/**在函数名前冠以关键字inline，该函数就被声明为内联函数**/
/*
* 
内联函数在第一次被调用之前必须进行完整的定义，否则编译器将无法知道应该插入什么代码
在内联函数体内一般不能含有复杂的控制语句，如for语句和switch语句等
使用内联函数是一种空间换时间的措施，若内联函数较长，较复杂且调用较为频繁时不建议使用
*/
inline double circle(double r)
{
    double PI = 3.14;
    return PI * r * r;
}
/*带有默认参数值的函数
* 
void init(int x = 5, int y = 10);
init (100, 19);   // 100 ， 19
init(25);         // 25, 10
init();           // 5， 10
*/
void init(int a, int b, int c = 100)
{
    cout << "a+b=" << a + b << "c = " << c << endl;


}


/*
重载函数
在同一作用域内，只要函数参数的类型不同，或者参数的个数不同，
或者二者兼而有之，两个或者两个以上的函数可以使用相同的函数名。

*/

/*
* 以下情况不允许重载
* ------函数返回值类型不在参数匹配检查之列
int mul(int x, int y);
double mul(int x, int y);
-------引起二义性
void Drawcircle(int r = 0, int x = 0, int y = 0);
void Drawcircle(int r);
Drawcircle(20);
---------
在调用函数时，如果给出的实参和形参类型不相符，C++的编译器会自动地做类型转
换工作。如果转换成功，则程序继续执行，在这种情况下，有可能产生不可识别的错误。

*/
int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

double add(double x, double y, double z)
{
    return x + y + z;
}

    
//class Score {
//public:
//     
//    Score(int a = 0, int b = 0);
//    ~Score();//析构函数与构造函数名字相同，但它前面必须加一个波浪号（~）。
//    
//    //构造函数:
//    //主要用于为对象分配空间，进行初始化,不能具有返回值
//    //构造函数的名字必须与类名相同，而不能由用户任意命名
//    //它不需要用户来调用，而是在建立对象时自动执行。
//
//    //析构函数:
//    /*
//    当对象的生命周期结束时，析构函数会被自动调用：
//    则当这个函数被调用结束时，该对象应该被释放.
//    */
//    void setScore(int n, int m)
//    {
//        mid_exam = m;
//        fin_exam = n;
//    }
//    void showScore()
//    {
//        cout << "mid : " << mid_exam << endl;
//        cout << "fin ： "<< fin_exam << endl;
//
//    }
///*
//使用inline定义内联函数时，必须将类的声明和内联成员函数的定义
//都放在同一个文件（或同一个头文件）中，否则编译时无法进行代码置换。
//*/
//private:
//    
//    int mid_exam;
//    int fin_exam;
//    //不能在类声明中给数据成员赋初值
//
//};

class A {
private:
    int x;
    int& rx;
    const double pi;
public:
    A(int v) : x(v), rx(x), pi(3.14)    //成员初始化列表,这里按照顺序初始化
    {	}
    void print()
    {
        cout << "x = " << x << " rx = " << rx << " pi = " << pi << endl;
    }
};

class B
{
public:
    char name[100];
    int No;

};





//Score::Score(int a, int b) :mid_exam(a), fin_exam(b)
//{
//    cout << "Init Score System ............" << endl;
//
//}

/*
class Student
{
private:
    char* name;
    char* stu_no;
    float score;
public:
    Student(const char* name1, const char* stu_no1, float score1);
    ~Student();
    void modify(float score1);
    void show();

};

Student::Student(const char* name1, const char* stu_no1, float score1)
{
    name = new char[strlen(name1) + 1];
    strcpy(name, name1);
    stu_no = new char[strlen(stu_no1) + 1];
    strcpy(stu_no, stu_no1);
    score = score1;
}

Student::~Student()
{
    delete []name;
    delete []stu_no;

}
void Student::modify(float score1)
{
    score = score1;

}
void Student::show()
{
    cout << "姓名: " << name << endl;
    cout << "学号: " << stu_no << endl;
    cout << "成绩：" << score << endl;

}
*/
/*
class StuInfo
{
public:
    StuInfo(int m, int n);
    StuInfo();//构造函数的重载
    void setScore(int m, int n);
    void showScore();
private:
    int mid_exam;
    int fin_exam;

};
*/
/*
每个类都必须有一个拷贝构造函数。可以自己定义拷贝构造函数，用于按照需要初始化新对象；
如果没有定义类的拷贝构造函数，系统就会自动生成一个默认拷贝构造函数，用于复制出与数据成员值完全相同的新对象。
*/

class Score
{
public:
    Score(const char* name1, int m, int f);
    Score();
    Score(const Score& p); ////拷贝构造函数
    void setScore(int m, int f);
    void showScore();

private:
    const char* name;
    int mid_exam;
    int fin_exam;



};
Score::Score(const char* name1, int m, int f)
{
    name = name1;
    mid_exam = m;
    fin_exam = f;
}

Score::Score(const Score& p)
{
    mid_exam = p.mid_exam;
    fin_exam = p.fin_exam;
}

Score::Score(const Score& p)
{
    name = new char[strlen(p.name) + 1];
    if (name != 0) {
        

    }
}






int value;



int main()
{
    /*************************************************/
    //char name[100];
    //cout << "What;s your name ?" << endl;;
    //cin >> name;
    //

    //cout << "hello!" << name<<endl;

    /*************************************************/
    //ticketmachine tm;
    //tm.insertMoney(100);

    //int a, b;
    //cout << "input:" << endl;
    //cin >> a;
    //cin >> b;
    //cout << "a + b = " << add(a, b) << endl;

    /*************************************************/
    //void* pc;  //通用型指针
    //int i = 123;
    //char c = 'a';
    //pc = &i;
    //cout << pc << endl;
    //cout << *(int*)pc << endl;
    //pc = &c;
    //cout << *(char*)pc << endl;
    /*************************************************/
    /*
    作用域标识符"::"
    通常情况下，如果有两个同名变量，一个是全局的，另一个是
    局部的，那么局部变量在其作用域内具有较高的优先权，它将屏蔽全局变量。

    如果希望在局部变量的作用域内使用同名的全局变量，可以在该变量前加
    上“::”，此时::value代表全局变量value，“::”称为作用域标识符。
    */
    /*
    int value;
    value = 100;
    ::value = 1000;                               
    cout << "local value : " << value << endl;
    cout << "global value : " << ::value << endl;       
    * 强制类型转换
    int i = 10;
    double x = double(i);//建议
    */
    /******************************************************/

    /*
    C语言中使用函数malloc()和free()来进行动态内存管理。
    C++则提供了运算符new和delete来做同样的工作
    
    int* p;
    p = new int;    //malloc()
    delete p;       //free()
    int* cp = new int[10]; //为数组动态分配内存空间
    delete cp;
    在使用运算符new动态分配内存时，
     如果没有足够的内存满足分配要求，new将返回空指针（NULL）。
    */
    /**************************************************/

    //类型 &引用名 = 已定义的变量名
    /*引用并不是一种独立的数据类型，它必须与某一种类型的变量
    相联系。在声明引用时，必须立即对它进行初始化，不能声明完成后再赋值。
    int i = 10;
    int &k = i;
    cout << "i的地址为：" << &i << endl;
    cout << "k的地址为：" << &k << endl;
    cout << "i = " << i << endl << "k = " << k << endl;
    //指针是通过地址间接访问某个变量，而引用则是通过别名直接访问某个变量。
    
    -不允许建立void类型的引用
    -不能建立引用的数组
    -不能建立引用的引用。不能建立指向引用的指针。引用本身不是一种数据类型，所以没有引用的引用，也没有引用的指针。
    -可以将引用的地址赋值给一个指针，此时指针指向的是原来的变量。
    -可以用const对引用加以限定，不允许改变该引用的值，但是它不阻止引用所代表的变量的值。

    
    */
    /***********************************************************/

    ////两种形式
    //Score op1(90, 100);
    //op1.showScore();
    //Score* op2;
    ////---
    //op2 = new Score(80, 90);
    //op2->showScore();
    ////---
    //Score op3;
    //op3.showScore();

    ////---
    //A tu(12);
    //tu.print();
    /*********************************************************/

    //Student stu("小明", "8207221299", 90);
    //stu.modify(100);
    //stu.show();

    /******************************************/

    /*B exmp = { "chen",23 };
    cout << exmp.name << exmp.No << endl;*/
    /*******************************************************/


    //调用拷贝构造函数的一般形式为：
    //类名 对象2(对象1);
    //类名 对象2 = 对象1;
    //Score sc1(98, 87);
    //Score sc2(sc1);//调用拷贝构造函数
    //Score sc3 = sc2;   //调用拷贝构造函数

    /******************************************************/

    /*
        浅拷贝，就是由默认的拷贝构造函数所实现的数据成员逐一赋值。
        通常默认的拷贝构造函数是能够胜任此工作的，但若类中含有指针类型的数据，则这种按数据成员逐一赋值的方法会产生错误。
    */
    //如下语句会产生错误
    Score stu1("小明", 90, 100);
    Score stu2 = stu1; //浅拷贝
    



    return 0;
}




























