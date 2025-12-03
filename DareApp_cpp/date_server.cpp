#include <iostream>
#include "date.hpp"

Date::Date():day(1),month(1),year(1970)
{


}
Date::Date(int init_day, int init_month, int init_year): day(init_day), month(init_month), year(init_year) { }


int Date::get_day() const
{
    return day;
}

int Date::get_month() const
{
    return month;
}

int Date::get_year() const
{
    return year;
}


void Date::set_day(int new_day)
{
    day = new_day;
}

void Date::set_month(int new_month)
{
    month = new_month;
}

void Date::set_year(int new_year)
{
    year = new_year;
}




void Date::show_date() const
{
    std::cout<<"Day: "<<day<<std::endl;
    std::cout<<"Month: "<<month<<std::endl;
    std::cout<<"Year: "<<year<<std::endl;




}
