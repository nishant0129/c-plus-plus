//c++ program to delete the element in an array at particular position
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[100],pos;
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
  cout <<"\nenter the position to delete from an array";
  cin>>pos;
  if(pos>n)
  {
      cout<<"this is out of range";

  }
  else
  {
    pos--;
    for(i=pos; i<n; i++)
     {
       a[i]=a[i+1];
     }
    cout<<"\nnew array= \n";
     for(i=0;i<n-1; i++)
     {
      cout<<a[i]<<" ";
     } 
  }
  return 0;
}