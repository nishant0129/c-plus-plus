#include<iostream>
using namespace std;
int main ()
{
    int i,j ,input;
    //cout << " enter the value of input  ";
   // cin>>input;
    for(i=7; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
        cout <<  j << " ";
        }
        cout << endl;

    }
    return 0;

}