#include <iostream>
#include<stdio.h>
using namespace std;

int countDigits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
} 

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int res=countDigits(n);
    cout<<res;
    return 0;
}