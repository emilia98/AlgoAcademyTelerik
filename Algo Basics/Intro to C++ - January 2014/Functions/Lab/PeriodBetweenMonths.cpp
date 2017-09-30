#include <iostream>
#include <string>
#include <cmath>
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
    int period = abs(endMonth - startMonth);
    
    cout<<"There are "<<period<<" months between "<<
             nameMonth(startMonth)<<" and "<<nameMonth(endMonth)<<".\n";

}

int main()
{
    int firstMonth, secondMonth;
    cout<<"Enter first month: ";
    cin>>firstMonth;
    cout<<"Enter second month: ";
    cin>>secondMonth;
    
    findPeriod(firstMonth, secondMonth);
    return 0;
}


