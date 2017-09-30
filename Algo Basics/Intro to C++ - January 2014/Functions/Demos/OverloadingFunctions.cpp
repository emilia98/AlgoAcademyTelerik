#include <iostream>
using namespace std;

int print(int a)
{
    cout<<"Parameters: 1 => a = ";
    return a; 
}

int print(int a, int b)
{
    cout<<"Parameters: 2 => a + b = ";
    return a + b; 
}

int print(int a, int b, int c)
{
    cout<<"Parameters: 3 => a + b + c = ";
    return a + b + c; 
}

int main()
{
    cout<<print(1)<<endl;
    cout<<print(1,2)<<endl;
    cout<<print(1,2,3)<<endl;
    return 0;
}