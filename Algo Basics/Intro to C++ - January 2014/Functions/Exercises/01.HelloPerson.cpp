#include <iostream>
#include <string>
using namespace std;

void sayHello(string name)
{
    cout<<"Hello, "<<name<<"!"<<endl;
}

int main()
{
    string name;
    getline(cin, name);
    sayHello(name);
    return 0;
}