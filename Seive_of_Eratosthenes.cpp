#include<iostream>
#include<vector>
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
void Seive(int n)
{
    vector<bool> isPrime(n+1, true);
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    Seive(n);
    return 0;
}