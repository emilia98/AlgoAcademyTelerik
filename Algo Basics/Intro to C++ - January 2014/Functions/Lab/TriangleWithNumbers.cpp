#include <iostream>
using namespace std;

void printPartOfTriangle(int start, int end)
{
    for(int cnt = start; cnt <= end; cnt++)
    {
        cout<<cnt<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    for(int index = 1; index <= n; index++)
    {
        printPartOfTriangle(1, index);
    }
    
    for(int index = n - 1; index >= 1; index--)
    {
        printPartOfTriangle(1, index);
    }
    return 0;
}