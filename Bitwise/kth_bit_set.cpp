#include<iostream>
#include<math.h>
using namespace std;
bool setKthBit(int n, int k)
{
    int count=0;
    while(n>0)
    {
        count++;
        int r=n%2;
        if(count==k && r==1)
            return true;
        if(count>k)
            return false;
        n=n/2;
    }
    return false;
}
bool setBitwithAnd(int n, int k)
{
    int kpow=pow(2, k-1);
    if((n & kpow)!=0)
    {
        return true;
    }
    else{
        return false;
    }
}
bool leftSHiftBit(int n , int k)
{
    int x=(1<<(k-1));
    if(n&x)
    {
        return true;
    }
    else{
        return false;
    }
}
bool rightSHiftBit(int n , int k)
{
    int x=(n>>(k-1));
    if(1&x)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n,k;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the Kth-bit: ";
    cin>>k;
    if(setKthBit(n,k))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    if(setBitwithAnd(n,k))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    if(leftSHiftBit(n,k))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    if(rightSHiftBit(n,k))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}