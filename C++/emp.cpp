#include<iostream>
#include<cstring>

class Employee
{
    private: 
    char name[10];
    int age;
    int id;
    double sal;

     public:
     a()
     {
        Employee(constchar*)=""

     }Employee
     strcpy(this->name),name()
     {
     this->sal=sal;
     }

    void set_name(const char )
    {

    }
      void get_name(int id )
    {
              this->id=id;
              return;
    }
    
 
    void set_sal(int sal)
    {
        this->sal=sal;

    }
  
    void get_sal(int sal)
    {
        this->sal=sal;
        return;
        
    }

     void set_id(int id)
    {
        this->id=id;

    }
    void get_id(int id)
    {
        this->id=id;
        return;
        
    }


     void set_age(int age)
    {
        this->age=age;

    }
    void get_age(int age)
    {
        this->age=age;
        return;
        
    }



    void display()
    {
    std::cout<<"name:"<<name<<std::endl;
     std::cout<<"salary:"<<sal<<std::endl;
      std::cout<<"age:"<<age<<std::endl;
       std::cout<<"id:"<<id<<std::endl;

    }

    double cal_sal()
    {
         return sal;
    }

    
     
};


class Manager:public Employee
{
    double bonus;
    Manager(const char* name="",int age=0,int id=0,double sal=0, double bonus=0):Employee(name,age,id,sal)
    {
           this->bonus=bonus;
    }
};