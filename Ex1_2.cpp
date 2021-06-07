#include <iostream>
using namespace std;
int main() 
{
    int N = 100,num;
    for (num = N; num >=0;num --)
	{	
		if (num % 3 == 0)
		{
			cout << num << " ";
		}
	}
}