#include<iostream>
using namespace std;
int main()
{
    char i,j;
    for (i='F'; i>='A'; i--)
    {
        for(j='A'; j<=i; j++)
        {

        
        cout << j << " ";
        }
     cout<<endl;
    }
    
    return 0;
}
