//c++ program to print the matrix
#include<iostream>
using namespace std;
int main(){
    int n,i,j,a[100][100],trans[100][100];
    cout <<"enter the size(n) of an array";
    cin>> n;
    
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout<<"the value of arr["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];

        }
    }
     cout << "matrix are\n";
    for(i=0; i<=n; i++)
    {
        for(j=0;j<=n; j++)
        {
        cout<<"\t "<<a[i][j] <<" ";
        }
      cout<<endl;
    }

    
   return 0;

}