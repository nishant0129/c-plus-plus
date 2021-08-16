#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char s[]="SAURABH";
    for(i=0; s[i]; i++)
    {
        for(j=0; j<=i; j++)
        cout<<s[j]<<" ";
        system("Color 0A");
        cout<<endl;
    }
    return 0;
}