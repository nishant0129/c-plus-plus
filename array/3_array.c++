// c program to reverse an array using pointer
#include <iostream >
using namespace std;
int main()
{
    int i,a[10],size;
    int* p;
    p=&a[10];
    cout<<"enter the size of an array in between 1 to 10";
    cin>>size;
    for(i=0; i<size; i++)
    {
        cout <<"array element arr["<<i<<"]\n";
        cin>>a[i];
    }
    cout<<"sorted array are ";
    for(i=0; i<size; i++)
    {
        cout<<" "<<*(a+i)<<" ";

    }
    cout <<"reverse the elements in an array";
    
     for(i=size; i>=0; i--)
     {
         cout<<*(a+i)<<" ";
     }
    return 0;
}