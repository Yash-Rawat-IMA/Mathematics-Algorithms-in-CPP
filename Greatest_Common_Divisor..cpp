#include<iostream>
using namespace std;
int GCD(int a, int b)
{
    if(b%a==0)
    {
        return a;
    }
    if(a%b==0)
    {
        return b;
    }
    int s=min(a, b);
    int res=1;
    for(int i=2;i<s;i++)
    {
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    }
    return res;
}
int main() {
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int res=GCD(a, b);
    cout<<res;
    return 0;
}