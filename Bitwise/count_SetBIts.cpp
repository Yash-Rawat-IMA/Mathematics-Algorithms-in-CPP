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
int countSetBitsAnd(int n)
{
    int res=0;
    while(n>0)
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
    int res1=countSetBitsAnd(n);
    cout<<res1<<endl;
    return 0;
}