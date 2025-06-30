#include<iostream>
using namespace std;
void powSet(string str, int n)
{
    int psize=(1<<n);
    for(int i=0;i<psize;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j))!=0)
                cout<<str[j];
        }
        cout<<endl;
    }
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    powSet(s,n);
    return 0;
}