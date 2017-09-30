#include <iostream>
using namespace std;

int max(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    return num2;
}

double getPrice()
{
    double price;
    cout<<"Enter price: ";
    cin>>price;
    return price;
}

int getValue()
{
    int value;
    cout<<"Enter value: ";
    cin>>value;
    return value; 
}

void printAge(int value)
{
    cout<<"Age: "<<value<<endl;
    return; 
    // return - terminates VOID function
    // => the last line from this function won't be printed
    cout<<"YOU WON'T SEE ME";
}

int returnOne()
{
    return 1;
}

void divideResults()
{
    for(int cnt = 1; cnt <= 40; cnt++)
    {
        cout<<"*";
    } 
    cout<<endl;
}
int main()
{
    //Returns a value of given type
    cout<<returnOne()<<endl;
    
    divideResults();
    
    int b = 15, c = 20;
    //Returned value is assigned to a variable
    int a = max(b,c);
    cout<<"a = "<<a<<endl;
    
    divideResults();

    //Returned value is used in an expression
    int q = 5;
    double price = getPrice() * q * 1.20;
    cout<<"price = "<<price<<endl;
    
    divideResults();
    /*Returned value from inner function is 
      passed to another function. 
      The returned one fron outer function 
      is assigned to a variable
    */
    printAge(getValue());
    
    return 0;
}