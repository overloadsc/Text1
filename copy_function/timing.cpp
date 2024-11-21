#include<iostream>
using namespace std;





class Person
{

public:

  Person()
 {
    cout<<"默认函数调用"<<endl;
 }

 ~Person()
 {
    cout<<"析构函数调用"<<endl;
 }

 Person (int age)
 {
    cout<<"有参函数调用"<<endl;
    m_Age=age;
 }


Person(const Person &p)
{
    cout<<"拷贝函数调用"<<endl;
m_Age=p.m_Age;

}


int m_Age;

};


void text01()
{
   Person p1(20) ;
   Person p2(p1);
}


void doWork(Person p)
{


}



void text02()
{
    Person p;
   doWork(p);
}





















int main()
{
     text01();
    return 0;
}