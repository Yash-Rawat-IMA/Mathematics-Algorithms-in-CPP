#include<iostream>
using namespace std;
int countSetBits(int n)
{
    int count=0;
    while(n>0)
    {
        if(n%2==1)
        {
            count++;
        }
        n/=2;
    }
    return count;
}
int countSetBitsShift(int n)
{
    int c=0;
    while (n)
    {
        if(n&1)
            c++;
        n>>=1;
    }
    return c;
}
int countSetBitsAnd(int n)
{
    int res=0;
    while(n)
    {
        n=n&(n-1);
        res+=1;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int res=countSetBits(n);
    cout<<res<<endl;
    int res2=countSetBitsShift(n);
    cout<<res2<<endl;
    int res1=countSetBitsAnd(n);
    cout<<res1<<endl;
    return 0;
}