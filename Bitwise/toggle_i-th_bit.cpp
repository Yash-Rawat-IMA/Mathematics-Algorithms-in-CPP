#include<iostream>
using namespace std;
int toggleIbit(int n, int i)
{
    i=i-1;
    return (n ^ (1<<i));
}
int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position of bit you want to clear: ";
    cin>>i;
    n=toggleIbit(n, i);
    cout<<n;
    return 0;
}