#include<iostream>
using namespace std;
bool checkPrime(int n)
{
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    int i;
    for(i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(checkPrime(n))
    {
        cout<<"Prime";
    }
    else{
        cout<<"Not, Prime";
    }
    return 0;
}