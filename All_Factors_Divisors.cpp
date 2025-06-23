#include<iostream>
using namespace std;
void AllFactorsNaive(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
void AllFactorsOptimized(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    for( ;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    AllFactorsNaive(n);
    cout<<endl;
    AllFactorsOptimized(n);
    return 0;
}