#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1,str2;
    int i, j, len = 0, p = 0;
    cout << "Enter the string : ";
    cin>>str1;
    len = str1.length();
    for (i =len, j = 0; i >= 0 ; i--, j++)
    {
        str2[j] = str1[i];
    }
    if (str1 == str2)
    {
        p = 1;
    }
    if (p == 1)
        cout << str1 << " is not a palindrome";
    else
        cout << str1 << " is a palindrome";
    return 0;
}