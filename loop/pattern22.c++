#include <iostream>
using namespace std;
int main(){
    char c='A';
    int n;
    cout<<"ENter no of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=i;s<n;s++)
        {
            cout<<"  ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<c<<" ";
           if(c=='A')
          c++;
          else
           c--;
       }
       for(int j=0;j<i-1;j++)
        {
        cout<<c<<" ";
        c++;
        }
       cout<<"\n";
    }
    return 0;
}