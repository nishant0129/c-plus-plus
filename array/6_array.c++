//c++ program to find product of matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,arr1[5][5],arr2[5][5],arr3[5][5],sum=0;
    cout<<"enter the size of matricx A";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"enter the element in a arr1["<<i<<"]["<<j<<"]=";
            cin>>arr1[i][j];
        }

    }
    cout <<"enter the elements in a matrix B\n";
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
        cout<<"the elements in an arr2["<<i<<"]["<<j<<"]=";
        cin>>arr2[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n;j++)
         
        {  
            sum=0;
            for(k=0;k<n;k++)
            {
                sum = sum + arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
        }
    }
    cout <<"multiplication of two matrices :: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

