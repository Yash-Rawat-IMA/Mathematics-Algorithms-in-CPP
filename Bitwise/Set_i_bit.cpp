#include<iostream>
using namespace std;
int setIbitXOR(int n, int i)
{
    i=i-1;
    if((n & (1<<i)) == 0)
    {
        n = n ^ (1<<i);
    }
    return n;
}
int setIbitOR(int n, int i)
{
    i=i-1;
    return (n | (1<<i));
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i;
    cout<<"Enter the bit you want to set: ";
    cin>>i;
    n=setIbitXOR(n, i);
    cout<<n<<endl;
    n=setIbitOR(n, i);
    cout<<n;
}