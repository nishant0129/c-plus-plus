//c program to reverse an array 
#include<iostream>
using namespace std;
int main()
{
    int i,j,size,a[10];
    cout<<"enter the array size in between 1 to 10";
    cin>>size;
    cout <<"array elements are\n ";
    for(i=0;i<size; i++)
    {
        cout<<"the elements in an array["<<i<<"]=" ;
        cin>>a[i];
    }
    cout<<"sorted array are=";
    for(i=0;i<size;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    cout<<endl;
    cout <<"reverse elements in an array are";
   for(i=size-1 ; i>=0; i--)
   {
       cout<<a[i]<<" ";
   }
    return 0;

}