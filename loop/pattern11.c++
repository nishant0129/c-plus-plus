#include<iostream>
using namespace std;
int main()
{
    int i,j ,n ,s,t;
    cout << "enter the value of n";
    cin >>n;
    for(i=1; i<=n; i++)
    {
        for(j=n; j>i; j--)
        cout <<" ";
        for(s=1; s<=i; s++)
        cout<<"* ";
        cout<<endl;

    }
    for(i=1; i<=n; i++)
    {
       for(j=0; j<i; j++)
        cout<<" ";
       for(s=n; s>i; s--)
       cout<<"* ";
        cout<<endl;
        
    }
    return 0;
}