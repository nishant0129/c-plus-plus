//c++ program to insert  the element in an array at specified position
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[100],pos,num;
    cout<<"the size(n) of the array is";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"the element arr["<<i<<"] is =";
        cin>>a[i];
    }
    cout <<"the elements are in an array are=";
    for(i=0; i<n; i++)
    { 
        cout<<a[i]<<" ";
    }
  cout <<"\nenter the position to insert a num  in an array";
  cin>>pos;
  if(pos>n)
  {
      cout<<"this is out of range";

  }
  else
  {   
    cout <<"enter the value of num";
    cin>>num;
    pos--;
  
    for(i=n; i>=pos; i--)
     {
       a[i+1]=a[i];
     }

     a[pos]=num;
     
    cout<<"\nnew array= \n";
     for(i=0;i<=n; i++)
     {
      cout<<a[i]<<" ";
     } 
  }
  return 0;
}