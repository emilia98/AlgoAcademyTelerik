#include <iostream>
using namespace std;

bool checkIfAllPositive(int array[], int n)
{
    for(int index = 0; index < n; index++)
    {
        if(array[index] < 0)
        {
            return false;
        }
    }
    return true;
}

void printResult(bool areAllPositive)
{
    if(areAllPositive)
    {
        cout<<"All are positive."<<endl;
    }
    else
    {
        cout<<"NOT all are positive."<<endl;
    }
}

int main()
{
    int array[20];
    int n;
    cin>>n;
   
    for(int cnt = 0; cnt < n; cnt++)
    {
        cin>>array[cnt];
    }
    
    bool areAllPositive = checkIfAllPositive(array, n);
    printResult(areAllPositive);
    
    return 0;
}