class Date
{
    private:
    int day;
    int month;
    int year;

    public:            //public bcoz access  otside
    Date();
    Date(int init_day,int init_month,int init_year);

    int get_day() const;
    int get_month() const;
    int get_year() const;


   // Date(int new_day,int new_month,int new_year);
    void set_day(int new_day);
    void set_month(int new_month);
    void set_year(int new_year);

    void show_date() const;
    
};