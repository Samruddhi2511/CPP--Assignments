#include<iostream>
using namespace std;


class parent
{
    public:
    parent()
    {
        parent* ptr=this;
        f3();
    }
    void f1()
    {
        f2();
       
    }
     virtual void f2()
        {
            
        }
    virtual void f3()
    {

    }    
};

int main()
{
    parent pobj;
    parent* ptr=&pobj;
    ptr->f1();
    ptr->f3();


}

