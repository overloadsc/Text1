#include<iostream>
#include<string>
using namespace std;

class CPU
{
private:
      /* data */
public:
 virtual void calculate()=0;
      
};

class VideoCard
{
private:
      /* data */
public:
 virtual void display()=0;
      
};

class Memory
{
private:
      /* data */
public:
 virtual void storage()=0;
      
};


class Computer
{
      public:
      Computer(CPU * cpu,VideoCard * vc, Memory * mem )
      {
            m_cpu=cpu;
            m_vc=vc;
            m_mem=mem;
      }


      void work()
      {
            m_cpu->calculate();
            m_vc->display();
            m_mem->storage();
      }
      private:
      CPU * m_cpu;
      VideoCard * m_vc;
      Memory * m_mem;
};

class IntelCPU:public CPU
{
      public:
      virtual void calculate()
      {
            cout<<"Intel的CPU开始计算了"<<endl;
      }

};

class IntelVideoCard:public VideoCard
{
      public:
      virtual void display()
      {
            cout<<"Intel的VideoCard开始显示了"<<endl;
      }

};

class IntelMemory:public Memory
{
      public:
      virtual void storage()
      {
            cout<<"Intel的内存开始存储了"<<endl;
      }

};

class LenovoCPU:public CPU
{
      public:
      virtual void calculate()
      {
            cout<<"Lenovo的CPU开始计算了"<<endl;
      }

};

class LenovoVideoCard:public VideoCard
{
      public:
      virtual void display()
      {
            cout<<"Lenovo的VideoCard开始显示了"<<endl;
      }

};

class LenovoMemory:public Memory
{
      public:
      virtual void storage()
      {
            cout<<"Lenovo的内存开始存储了"<<endl;
      }

};

void text01()
{

      CPU * IntelCpu =new IntelCPU;
      VideoCard * IntelCard=new IntelVideoCard;
      Memory * IntelMem=new IntelMemory;

      Computer * computer1= new Computer(IntelCpu,IntelCard,IntelMem);
      computer1->work();
      delete computer1;
}


int main()
{
      return 0;//return
}
