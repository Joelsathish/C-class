#include <iostream>
using namespace std;
int main()
{
    int x = 25;
    int *p;
    p = &x;
    cout<<"The value of X is:"<<x<<endl;
    cout<<"The address of the variable is:"<<p<<endl;
    *p = 50;
    cout<<"The changed value is:"<<x<<endl;
}