//c++ program to pass an array in a function
#include<iostream>
using namespace std;
void pass(int[],int);
int main()
{
    int a[]={1,2,3,4,4};
    pass(a,5);
    return 0;
}
void pass(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<b[i]<<"\n";
    }
}