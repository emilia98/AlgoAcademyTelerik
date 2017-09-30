#include <iostream>
using namespace std;

double getMax(double num1, double num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    return num2;
}

int main()
{
    double a, b, c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    
    double max = getMax(b,c);
    max = getMax(a, max);
    cout<<"Max = "<<max<<endl;
    return 0;
}