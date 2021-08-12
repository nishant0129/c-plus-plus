#include<iostream>
using namespace std;
int sum(int n)
{
if(n>=1)
return n+sum(n-1);
else
return 0;
}
int main()
{
    int z;
    cout << "enter the value of n ";
    cin >> z;
    cout << sum(z);
    return 0;
}