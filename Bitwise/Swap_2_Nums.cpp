#include<iostream>
using namespace std;
void swap_2_num(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;  // here new a is a^b, b= (a^b)^b=a .....b cancels out b, the left answer is a
    a = a ^ b;  // here a is (a^b) and new b is a, a = (a^b)^a = b, as a cancels out a, left is b
}
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    swap_2_num(a, b);
    cout<<"After swapping first and second: ";
    cout<<a<<" "<<b;
    return 0;
}