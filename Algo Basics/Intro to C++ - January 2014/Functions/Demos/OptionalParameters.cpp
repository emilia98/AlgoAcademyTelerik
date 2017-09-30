#include <iostream>
using namespace std;
/*
  We have values, in case we decide not to give them values later
*/
int sum(int a = 10, int b = 20)
{
    int result = a + b;
    return result;
}

int main()
{
    cout<<"Sum1 = "<<sum(5,10)<<endl;
    cout<<"Sum2 = "<<sum(15)<<endl;
    cout<<"Sum3 = "<<sum()<<endl;
    return 0;
}