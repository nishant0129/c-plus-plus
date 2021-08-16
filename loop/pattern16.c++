#include<iostream>
using namespace std;
int main()
{
    char i,j,n;
    cout<<"enter the upper case  value of n";
    cin>>n;
    for(i='A'; i<=n; i++)
    {
        for(j=n;j>=i;j--)
        cout <<i<<" ";
        cout<<endl;
    }
    return 0;
}