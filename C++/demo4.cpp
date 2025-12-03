#include<iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        this->a = 1;
    }
};

class B
{
public:
    double b;
    B()
    {
        this->b = 2;
    }
};

class C
{
public:
    double c;
    C()
    {
        this->c = 3;
    }
};

class D :public A, public B, public C
{
public:
    double d;
    D()
    {
        this->d = 4;
    }

};

int main()
{

    D dobj;
    A* aptr = &dobj;
    B* bptr = &dobj;
    C* cptr = &dobj;
    std::cout << " &dobj: " << &dobj << std::endl;
    std::cout << " aptr: " << aptr << std::endl;
    std::cout << " bptr: " << bptr << std::endl;
    std::cout << " cptr: " << cptr << std::endl;

    aptr->a;
    //aptr->b;
    //aptr->c;
    return 0;

}