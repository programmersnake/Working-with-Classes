#include <stdio.h>
#include <iostream>

class Calendar {
    
    private:
        short day, month;
        int year;
    
    public:
        Calendar(short days, short months, int years){
            day=days;
            month=months;
            year=years;
            std::cout << "Calendar start working";
            void getDate();
            void setDate();
        }
        void getDate(){
            std::cout << std::endl << "Day:" << day << " Month:" << month << " Year:" << year;
        }
        void setDate(){
            std::cout << std::endl << "Day=";
            std::cin >> day;
            std::cout << "Month=";
            std::cin >> month;
            std::cout << "Year=";
            std::cin >> year;
        }
        ~Calendar(){
            std::cout << std::endl <<"Calendar finished working";
        }        
};

int main()
{
    Calendar cd(0,0,0);
    cd.getDate();
    cd.setDate();
    cd.getDate();
    return 0;
}
