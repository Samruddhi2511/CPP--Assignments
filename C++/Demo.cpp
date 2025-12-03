#include<stdlib.h>
#include<iostream>
class Demo
{
   public:
    int a;
    int b;
    int *p;
    Demo()
    {

    }
    Demo(int _a, int _b, int _p)
    {
        this->a=_a;
        this->b=_b;
        this->p=(int*)malloc(sizeof(int));        //p is add hence direct 
        *(this->p)=_p;
    }

    Demo(Demo& ref)           //constructor for deep copy creation
    {
        //obj2   //obj1
        this->a=ref.a;
        this->b=ref.b;
        this->p=(int*)malloc(sizeof(int)); 
        *(this->p)=*(ref.p);
    }
    void operator=(Demo& ref)
    {
        
        this->a=ref.a;
        this->b=ref.b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=*(ref.p);
    }
    
};

int main()
{
    Demo dobj; 
    Demo dobj1(10,20,30);
    std::cout<<"dobj1::a-"<<dobj1.a<<std::endl<<"dobj1::b-"<<dobj1.b<<std::endl<<"dobj1::*p-"<<(*dobj1.p)<<std::endl;
    
    Demo dobj2(dobj1);       //shallow copy will create     //hence for deep copy explicitly constructor lihava
    std::cout<<"dobj2::a-"<<dobj2.a<<std::endl<<"dobj2::b-"<<dobj2.b<<std::endl<<"dobj2::*p-"<<(*dobj2.p)<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;


    (dobj1.a)++;
    (dobj2.b)++;

    std::cout<<"dobj1::a-"<<dobj1.a<<std::endl<<"dobj1::b-"<<dobj1.b<<std::endl<<"dobj1::*p-"<<(*dobj1.p)<<std::endl;
    std::cout<<"dobj2::a-"<<dobj2.a<<std::endl<<"dobj2::b-"<<dobj2.b<<std::endl<<"dobj2::*p-"<<(*dobj2.p)<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;


    (*(dobj1.p))++;
     
    std::cout<<"dobj1::a-"<<dobj1.a<<std::endl<<"dobj1::b-"<<dobj1.b<<std::endl<<"dobj1::*p-"<<(*dobj1.p)<<std::endl;
    std::cout<<"dobj2::a-"<<dobj2.a<<std::endl<<"dobj2::b-"<<dobj2.b<<std::endl<<"dobj2::*p-"<<(*dobj2.p)<<std::endl;
     

    std::cout<<std::endl;
    std::cout<<std::endl;

    Demo dobj3=dobj1;
    (*(dobj1.p))++;

    std::cout<<"dobj1::a-"<<dobj1.a<<std::endl<<"dobj1::b-"<<dobj1.b<<std::endl<<"dobj1::*p-"<<(*dobj1.p)<<std::endl;
    std::cout<<"dobj3::a-"<<dobj3.a<<std::endl<<"dobj3::b-"<<dobj3.b<<std::endl<<"dobj3::*p-"<<(*dobj3.p)<<std::endl;

    std::cout<<std::endl;
    std::cout<<std::endl;

     
    Demo dobj4=dobj1;    //call will be =>  dobj4.operator=(dobj1);
    (*(dobj1.p))++;
    std::cout<<"dobj1::a-"<<dobj1.a<<std::endl<<"dobj1::b-"<<dobj1.b<<std::endl<<"dobj1::*p-"<<(*dobj1.p)<<std::endl;
    std::cout<<"dobj4::a-"<<dobj4.a<<std::endl<<"dobj4::b-"<<dobj4.b<<std::endl<<"dobj4::*p-"<<(*dobj4.p)<<std::endl;

    std::cout<<"-------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;


    Demo dobj5;
    dobj5=dobj1;
    //std::cout<<"dobj5::a-"<<dobj5.a<<std::endl;
    std::cout<<"dobj1::a-"<<dobj1.a<<std::endl<<"dobj1::b-"<<dobj1.b<<std::endl<<"dobj1::*p-"<<(*dobj1.p)<<std::endl;
    std::cout<<"dobj5::a-"<<dobj5.a<<std::endl<<"dobj5::b-"<<dobj5.b<<std::endl<<"dobj5::*p-"<<(*dobj5.p)<<std::endl;

    
    
     return 0;
}