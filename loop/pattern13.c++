#include<iostream>
using namespace std;
int main()
{
    int i,j,s,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        { 
            if(j==1|| j==i||i==n)
        cout<<"* ";
        else{
            cout<<"  ";
        }
        
        }
       cout<<endl;
    }
    return 0;
}