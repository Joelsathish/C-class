#include <iostream>

using namespace std;

int main()

{
    int a[10],b[10],n,i,sum[10];
    cout<<"Enter size of the matrices: ";
    cin>>n;
    cout<<"Enter matrix A: ";
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"Enter matrix B: ";
    for(i=0;i<n;i++)
    {

        cin>>b[i];
    }
    cout<<"Sum of matrices A and B is : ";
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
         cout<<"\n";
        cout<<sum[i];
    }
    return 0;
}