 
#include <iostream>
using namespace std;
int main()
{
  int i,j;
  int n=5;
  int diff,value;
 
    for(i=1;i<=n;i++)
    {
        diff=n-1;
        value=i;
        for(j=1; j<=i; j++)
        {
            cout<<((char)(value+64))<<" ";
            value=value+diff;
            diff--;
        }
        cout<<endl;
    }
  return 0;
}