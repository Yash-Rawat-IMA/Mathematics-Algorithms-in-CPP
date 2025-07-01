#include<iostream> 
using namespace std;
int removeLastSetBitXOR(int n)
{
    int k=1;
    while(true)
    {
        if(n & k)
            return n ^ k;
        k<<=1;
    }
}
int removeLastSetBitAND(int n)
{
    return (n & (n-1));
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int n1=removeLastSetBitXOR(n);
    cout<<n1<<endl;
    int n2=removeLastSetBitAND(n);
    cout<<n2;
    return 0;
}