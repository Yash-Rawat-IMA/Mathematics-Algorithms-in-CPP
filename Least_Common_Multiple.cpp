#include<iostream>
using namespace std;
int HCF(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return HCF(b, a%b);
}
int LCMEfficient(int a, int b)
{
    return (a*b)/HCF(a,b);
}
int LCMNiave(int a, int b)
{
    int big=max(a, b);
    for(int i=big;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
        }
    }
}
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int res1=LCMNiave(a, b);
    cout<<res1<<endl;
    int resEff=LCMEfficient(a,b);
    cout<<resEff;
    return 0;
}