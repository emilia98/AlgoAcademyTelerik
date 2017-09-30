#include <iostream>
using namespace std;

int max(int, int);
void print(int);

int max1(int first, int second)
{
    int result;
    
    if(first > second)
    {
        result = first;
    }
    else
    {
        result = second;
    }
    return result;
}

int max2(int first, int second)
{
    int result = first;
    
    if(first < second)
    {
        result = second;
    }
    return result;
}

void print(int number1, int number2)
{
    cout<<"Result1 = "<<number1<<endl;
    cout<<"Result2 = "<<number2<<endl;
}

int main()
{
    int a;
    int b;
    cout<<"a = ";
    cin >>a;
    cout<<"b = ";
    cin>>b;
    //First kind of function max -> longer
    int result1 = max1(a,b);
    //Second kind of function max -> shorter
    int result2 = max2(a,b);
    print(result1,result2);
    
    return 0;
}
