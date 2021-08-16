#include<iostream>
using namespace std;
int main()
{
    int  i,k,j,n;
    char c='A';
    cout <<"enter the value of n";
    cin>>n;
    for(i=0; i<=n;i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<"  ";
        }
        for(k=n; k>=i;k--)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    
        
    return 0;

}