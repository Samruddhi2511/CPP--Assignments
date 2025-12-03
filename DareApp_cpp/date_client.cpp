#include<iostream>
#include "date.hpp"

int main(void)
{

  Date* p_date=new Date();              //new ne malloc la call jato and size of date()
  Date* p_date1=new Date(1,1,1970);                                     //here init la call nhi kraych 
 
  Date* p_date2=new Date();
  std::cout<<"Day: "<<p_date->get_day()<<std::endl;
  std::cout<<"Month: "<<p_date->get_month()<<std::endl;
  std::cout<<"Year: "<<p_date->get_year()<<std::endl;
  

   p_date->set_day(11);
   p_date->set_month(4);
   p_date->set_year(2000);


  p_date->show_date();


  delete p_date;
  p_date=NULL;

  delete p_date1;
  p_date1=NULL;
  
  return 0;

  
}