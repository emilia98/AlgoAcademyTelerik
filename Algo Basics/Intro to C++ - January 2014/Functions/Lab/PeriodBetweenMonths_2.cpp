#include <iostream>
#include <string>
using namespace std;

string nameMonth(int month){
    string months[] = 
    {
        "January",
        "February",
        "March",
        "April", 
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    return months[month - 1];
}

void findPeriod(int startMonth, int endMonth)
{
    int period = endMonth - startMonth;
    
    if(period < 0)
    {
        period += 12;
    }
    
    cout<<"There are "<<period<<" months between "<<
             nameMonth(startMonth)<<" and "<<nameMonth(endMonth)<<".\n";

}

int main()
{
    int firstMonth, secondMonth;
    cout<<"Enter first month: "<<firstMonth;
    cin>>firstMonth;
    cout<<"Enter second month: "<<secondMonth;
    cin>>secondMonth;
    
    findPeriod(firstMonth, secondMonth);
    return 0;
}


