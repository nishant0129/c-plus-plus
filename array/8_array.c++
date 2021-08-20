//c++ program to find even and odd elements in an array
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[100];
    cout<<"enter the size of an array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"the element of arr["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"elements in an array are \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0; i<n;i++)
    {
        if(a[i]%2==0)
        { 
            cout<<"a["<<i<<"] is even number\n";
        }
        else
        {
            cout<<"a["<<i<<"] is odd number\n";
        }
        cout<<endl;
    }
    return 0;
}