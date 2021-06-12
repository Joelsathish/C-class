#include<iostream>
using namespace std;
int main()
{
    string dna;
    int i,n;
    cout<<"Enter the DNA sequence"<<endl;
    cin>>dna;
    cout<<"The length of the DNA sequence is:"<<dna.length()<<endl;
    cout<<"Enter range of nucleotide that you want print '0' to :";
    cin>>n;
    cout<<"The nucleotide till"<<" "<<n<<" is: ";
    for(i=0;i<n;i++)
    {
        cout<<dna[i];
    }
}