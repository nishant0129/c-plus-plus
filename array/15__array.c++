//c++ program to calculate sum of diagonal elements of matrix
#include<iostream>
using namespace std;
int main(){
    int n,i,j,a[100][100],trans[200][200] , d2sum=0 , d1sum=0;
    cout <<"enter the size(n) of an array";
    cin>> n;
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<"the value of arr["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];

        }
    }
     cout << "matrix are\n";
    for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
        cout<<"\t "<<a[i][j] <<" ";
        }
      cout<<endl;
    }
    cout<<"the sum of diagonal elements of matrices are";
    for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
          if(i==j)
          d1sum +=a[i][j];
    
          if(i+j==(n-1))
            d2sum +=a[i][j];
          
          
        }
    }
    cout<<d1sum<<endl;
    cout<<d2sum;
   return 0;

}