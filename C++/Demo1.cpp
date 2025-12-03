#include<iostream>
class Date
{
    private:
    int day;
    int month;
    int year;
    public:

    Date():day(1),month(1),year(1970)
    {

    }
    void show()const        //pointer to const i.e we cannt changes values
    {
        std::cout<<" day:"<<this->day<<" month:"<<this->month<<" year:"<<this->year<<std::endl;
        //this->day=50;
    }




};

int main()
{
    Date my_date1;
    my_date1.show();
    return 0;

    Date mydate2(my_date1);            //copy constructor
    mydate2.show(); 
            

}