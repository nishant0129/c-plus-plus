//c++ program to seperate odd and even number from an array
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
    cout<<"\neven number in an array are\n";
    for(i=0; i<n;i++)
    {
        if(a[i]%2==0)
        { 
            cout<<a[i]<<" ";
        }
    }  
    cout<<"\nodd number in an array are\n";
    for(i=0; i<n;i++)
    {
        if(a[i]%2==1)
        {
            cout<<a[i]<<" ";
        }
        
    }
    return 0;
}