#include<iostream>
using namespace std;
int clearIbitXOR(int n, int i)
{
    i=i-1;
    if((n & (1<<i)) != 0)
    {
        n = n ^ (1<<i);
    }
    return n;
}

int clearIbitAND(int n , int i)
{
    i=i-1;
    return (n & (~(1<<i))); 
}
int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position of bit you want to clear: ";
    cin>>i;
    n=clearIbitXOR(n, i);
    cout<<n<<endl;
    n=clearIbitAND(n, i);
    cout<<n;
    return 0;
}