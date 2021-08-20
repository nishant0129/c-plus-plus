//c++ program to find the sum of two matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j ,arr1[5][5],arr2[5][5],arr3[5][5],n;
    cout <<"enter the size 0f matrix 1 =";
    cin >>n;
    for(i=0; i<n; i++)
    { 
        for(j=0; j<n; j++)
        {
            cout<<"the value of arr1["<<i<<"]["<<j<<"]=";
            cin>>arr1[i][j];
        }
    }
    cout<<"enter the element in a matrix 2\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"the value of arr2["<<i<<"]["<<j<<"]=";
            cin>>arr2[i][j];
        
        }
    }
    
    
     for(i=0; i<n;i++)
     
     {
         for(j=0; j<n; j++)
         {
             arr3[i][j]=arr1[i][j]+arr2[i][j];
         }
     }
     cout<<"the sum of matrices1 and 2 is\n";
     for(i=0; i<n; i++)
     {
         for(j=0;j<n; j++)
         {
             
             cout<<arr3[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
}