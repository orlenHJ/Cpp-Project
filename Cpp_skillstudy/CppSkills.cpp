

#define _CRT_SECURE_NO_WARNINGS
//����strcpy,strcat�Ⱥ�����ȫ�Թ��ͣ��ᱨ����

#include <iostream>
#include<string>
using namespace std;

typedef int feet;
#include "ticketmachine.h"
int add(int x, int y);






/**�ں�����ǰ���Թؼ���inline���ú����ͱ�����Ϊ��������**/
/*
* 
���������ڵ�һ�α�����֮ǰ������������Ķ��壬������������޷�֪��Ӧ�ò���ʲô����
��������������һ�㲻�ܺ��и��ӵĿ�����䣬��for����switch����
ʹ������������һ�ֿռ任ʱ��Ĵ�ʩ�������������ϳ����ϸ����ҵ��ý�ΪƵ��ʱ������ʹ��
*/
inline double circle(double r)
{
    double PI = 3.14;
    return PI * r * r;
}
/*����Ĭ�ϲ���ֵ�ĺ���
* 
void init(int x = 5, int y = 10);
init (100, 19);   // 100 �� 19
init(25);         // 25, 10
init();           // 5�� 10
*/
void init(int a, int b, int c = 100)
{
    cout << "a+b=" << a + b << "c = " << c << endl;


}


/*
���غ���
��ͬһ�������ڣ�ֻҪ�������������Ͳ�ͬ�����߲����ĸ�����ͬ��
���߶��߼����֮�����������������ϵĺ�������ʹ����ͬ�ĺ�������

*/

/*
* �����������������
* ------��������ֵ���Ͳ��ڲ���ƥ����֮��
int mul(int x, int y);
double mul(int x, int y);
-------���������
void Drawcircle(int r = 0, int x = 0, int y = 0);
void Drawcircle(int r);
Drawcircle(20);
---------
�ڵ��ú���ʱ�����������ʵ�κ��β����Ͳ������C++�ı��������Զ���������ת
�����������ת���ɹ�����������ִ�У�����������£��п��ܲ�������ʶ��Ĵ���

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
//    ~Score();//���������빹�캯��������ͬ������ǰ������һ�����˺ţ�~����
//    
//    //���캯��:
//    //��Ҫ����Ϊ�������ռ䣬���г�ʼ��,���ܾ��з���ֵ
//    //���캯�������ֱ�����������ͬ�����������û���������
//    //������Ҫ�û������ã������ڽ�������ʱ�Զ�ִ�С�
//
//    //��������:
//    /*
//    ��������������ڽ���ʱ�����������ᱻ�Զ����ã�
//    ��������������ý���ʱ���ö���Ӧ�ñ��ͷ�.
//    */
//    void setScore(int n, int m)
//    {
//        mid_exam = m;
//        fin_exam = n;
//    }
//    void showScore()
//    {
//        cout << "mid : " << mid_exam << endl;
//        cout << "fin �� "<< fin_exam << endl;
//
//    }
///*
//ʹ��inline������������ʱ�����뽫���������������Ա�����Ķ���
//������ͬһ���ļ�����ͬһ��ͷ�ļ����У��������ʱ�޷����д����û���
//*/
//private:
//    
//    int mid_exam;
//    int fin_exam;
//    //�������������и����ݳ�Ա����ֵ
//
//};

class A {
private:
    int x;
    int& rx;
    const double pi;
public:
    A(int v) : x(v), rx(x), pi(3.14)    //��Ա��ʼ���б�,���ﰴ��˳���ʼ��
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
    cout << "����: " << name << endl;
    cout << "ѧ��: " << stu_no << endl;
    cout << "�ɼ���" << score << endl;

}
*/
/*
class StuInfo
{
public:
    StuInfo(int m, int n);
    StuInfo();//���캯��������
    void setScore(int m, int n);
    void showScore();
private:
    int mid_exam;
    int fin_exam;

};
*/
/*
ÿ���඼������һ���������캯���������Լ����忽�����캯�������ڰ�����Ҫ��ʼ���¶���
���û�ж�����Ŀ������캯����ϵͳ�ͻ��Զ�����һ��Ĭ�Ͽ������캯�������ڸ��Ƴ������ݳ�Աֵ��ȫ��ͬ���¶���
*/

class Score
{
public:
    Score(const char* name1, int m, int f);
    Score();
    Score(const Score& p); ////�������캯��
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
    //void* pc;  //ͨ����ָ��
    //int i = 123;
    //char c = 'a';
    //pc = &i;
    //cout << pc << endl;
    //cout << *(int*)pc << endl;
    //pc = &c;
    //cout << *(char*)pc << endl;
    /*************************************************/
    /*
    �������ʶ��"::"
    ͨ������£����������ͬ��������һ����ȫ�ֵģ���һ����
    �ֲ��ģ���ô�ֲ����������������ھ��нϸߵ�����Ȩ����������ȫ�ֱ�����

    ���ϣ���ھֲ���������������ʹ��ͬ����ȫ�ֱ����������ڸñ���ǰ��
    �ϡ�::������ʱ::value����ȫ�ֱ���value����::����Ϊ�������ʶ����
    */
    /*
    int value;
    value = 100;
    ::value = 1000;                               
    cout << "local value : " << value << endl;
    cout << "global value : " << ::value << endl;       
    * ǿ������ת��
    int i = 10;
    double x = double(i);//����
    */
    /******************************************************/

    /*
    C������ʹ�ú���malloc()��free()�����ж�̬�ڴ����
    C++���ṩ�������new��delete����ͬ���Ĺ���
    
    int* p;
    p = new int;    //malloc()
    delete p;       //free()
    int* cp = new int[10]; //Ϊ���鶯̬�����ڴ�ռ�
    delete cp;
    ��ʹ�������new��̬�����ڴ�ʱ��
     ���û���㹻���ڴ��������Ҫ��new�����ؿ�ָ�루NULL����
    */
    /**************************************************/

    //���� &������ = �Ѷ���ı�����
    /*���ò�����һ�ֶ������������ͣ���������ĳһ�����͵ı���
    ����ϵ������������ʱ�����������������г�ʼ��������������ɺ��ٸ�ֵ��
    int i = 10;
    int &k = i;
    cout << "i�ĵ�ַΪ��" << &i << endl;
    cout << "k�ĵ�ַΪ��" << &k << endl;
    cout << "i = " << i << endl << "k = " << k << endl;
    //ָ����ͨ����ַ��ӷ���ĳ������������������ͨ������ֱ�ӷ���ĳ��������
    
    -��������void���͵�����
    -���ܽ������õ�����
    -���ܽ������õ����á����ܽ���ָ�����õ�ָ�롣���ñ�����һ���������ͣ�����û�����õ����ã�Ҳû�����õ�ָ�롣
    -���Խ����õĵ�ַ��ֵ��һ��ָ�룬��ʱָ��ָ�����ԭ���ı�����
    -������const�����ü����޶���������ı�����õ�ֵ������������ֹ����������ı�����ֵ��

    
    */
    /***********************************************************/

    ////������ʽ
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

    //Student stu("С��", "8207221299", 90);
    //stu.modify(100);
    //stu.show();

    /******************************************/

    /*B exmp = { "chen",23 };
    cout << exmp.name << exmp.No << endl;*/
    /*******************************************************/


    //���ÿ������캯����һ����ʽΪ��
    //���� ����2(����1);
    //���� ����2 = ����1;
    //Score sc1(98, 87);
    //Score sc2(sc1);//���ÿ������캯��
    //Score sc3 = sc2;   //���ÿ������캯��

    /******************************************************/

    /*
        ǳ������������Ĭ�ϵĿ������캯����ʵ�ֵ����ݳ�Ա��һ��ֵ��
        ͨ��Ĭ�ϵĿ������캯�����ܹ�ʤ�δ˹����ģ��������к���ָ�����͵����ݣ������ְ����ݳ�Ա��һ��ֵ�ķ������������
    */
    //���������������
    Score stu1("С��", 90, 100);
    Score stu2 = stu1; //ǳ����
    



    return 0;
}




























