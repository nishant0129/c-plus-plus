#include<iostream>
using namespace std;
void prime();
int main()
{
  //  no argument is passed to the prime
  prime();
  return 0;
}
//return type of the function is void because no function is returned
void prime()
{
    int i,n,flag=0;
    cout <<" enter the value of n to check whether it is prime or not";
    cin>>n;
    for(i=2; i<=n/2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==1)
    {
    cout << n << "number is not a prime ";
    }
    else
    {
        cout<<n <<"number is  a prime ";
    }



}