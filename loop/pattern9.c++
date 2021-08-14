#include<iostream>
using namespace std;
int main() 

{   
    int row,i,space,j;
    cout <<"enter the value of rows";
    cin>>row;
    for(i=1; i<=row; i++)
    {
        for(space=2; space<=i; space++)
        cout <<"  ";
        for(j=1; j<=row-i; j++)
        cout << "* ";
        cout <<endl;
    }
    return 0;
}