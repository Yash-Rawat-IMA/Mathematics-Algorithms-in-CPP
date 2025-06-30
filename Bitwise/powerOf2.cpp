#include<iostream>
using namespace std;
bool pow2(int n)
{
    if(n==0)
        return false;
    if(n==1)
        return true;
    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n/=2;
    }
    return true;
}
bool isPow2(int n)
{
    /* if(n==0)
        return false;
    return ((n & (n-1))==0); */
    return (n && ((n & (n-1))==0));
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(pow2(n))
        cout<<"Yes";
    else{
        cout<<"No";
    }
    return 0;
}