#include<iostream>


class Parent
{
    public:
    int a;
    void fun()
    {
        std::cout<<"non-virtual parent fun";
    }
    virtual void gun()
    {
        std::cout<<"virtual parent gun"<<std::endl;c
    }
};

class child:public Parent
{
    public:
    int b;
    void gun()
    {
      std::cout<<"virtual child gun"<<std::endl;
    }
    
    virtual void sun()
    {
        std::cout<<"virtual child sun"<<std::endl;
    }
    void run()
    {
        std::cout<<"non-virtual child run"<<std::endl;
    }
};



int main()
{
   child cobj;
   int* p =reinterpret_cast<int*>(&cobj);
   int* q=reinterpret_cast<int*>(*p);

   void (*fp)();                                  //function pointer
   fp=(void(*)())*q;

   fp();

    void (*fp1)();
    fp1=(void(*)())((*q)+1); 

    fp1();



           

}








