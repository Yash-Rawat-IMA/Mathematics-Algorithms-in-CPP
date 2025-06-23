#include<iostream>
using namespace std;
int trailZeros(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+(n/i);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int res=trailZeros(n);
    cout<<res;
    return 0;
}