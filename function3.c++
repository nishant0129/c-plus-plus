#include<iostream>
using namespace std;
int add(int,int);
int main()
{   
    int sum;
    sum=add(100,32);
    cout<<"100+32="<< sum<<endl;
    return 0;
}
int add (int a, int b)
{ 
 return (a+b);
}