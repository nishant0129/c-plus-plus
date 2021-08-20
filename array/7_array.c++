//c++ program to find the duplicate of an array
#include<iostream >
using namespace std;
int main()
{
    int i,j,n,a[100];
    cout <<"enter the size of an array";
    cin>>n;
    for(i=0; i<n; i++)
    {
        
    
            cout <<"the element in an arr["<<i<<"]=";
            cin>>a[i];
    }
    cout<<"the elements in an array are\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nduplicate elements in an array are\n";
    for(i=0;i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}