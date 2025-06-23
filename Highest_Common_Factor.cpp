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
int main()
{
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int res=HCF(a,b);
    cout<<res;
    return 0;
}
