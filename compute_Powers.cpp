#include<iostream>
using namespace std;
long int computePower(int x, int n)
{
    if(x==0 && n==0)    return -1;
    if(x!=0 && n==0)    return 1;
    if(n==1)    return x;
    long int temp=computePower(x, n/2);
    temp=temp*temp;
    if(n%2==0)
    {
        return temp;
    }
    else{
        return temp*x;
    }
}
long int iterativePow(int x, int n)
{
    if(x==0 && n==0)    return -1;
    if(x!=0 && n==0)    return 1;
    if(n==1)    return x;
    int res=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            res=res*x;
        }
        n=n/2;
        x=x*x;
    }
    return res;
}
int main()
{
    int x, n;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the power to be raised: ";
    cin>>n;
    long int  res = computePower(x, n);
    if(res==-1)
    {
        cout<<"Undefined inputs (0 to power 0)";
    }
    else{
        cout<<res;
    }
    cout<<endl;
    long int  res1 = iterativePow(x, n);
    if(res1==-1)
    {
        cout<<"Undefined inputs (0 to power 0)";
    }
    else{
        cout<<res1;
    }
    return 0;
}