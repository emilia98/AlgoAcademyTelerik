#include <iostream>
using namespace std;

void printMax(double num1, double num2)
{
    cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
    if(num1 < num2)
    {
        cout<<"Max: "<<num2<<endl;
    }
    else
    {
        cout<<"Max: "<<num1<<endl;
    }
}

void printSign(int number)
{
    if(number > 0)
    {
        cout<<"Number = "<<number<<" => +"<<endl;
    }
    else if(number < 0)
    {
        cout<<"Number = "<<number<<" => -"<<endl;
    }
    else
    {
        cout<<"Number = "<<number<<" => 0"<<endl;
    }
}

int main()
{
    int balance = 0;
    printSign(-5);
    printSign(balance);
    printSign(2+3);
    
    double oldQuantity = 20, quantity = 10;
    printMax(100, 200);
    printMax(oldQuantity * 1.5, quantity * 2);
    
    return 0;
}