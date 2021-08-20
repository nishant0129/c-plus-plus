//c program to find largest elements in an array
#include<iostream>
using namespace std;
int main()
{    int i,a[20] ,size;
    cout<<"enter the size of an array in between 1 to 20 \n";
    cin>>size;
    cout<<"array elements are \n";
    
    for(i=0; i<size; i++)
    {
    cout<<"array element arr["<<i<<"] =";
    cin>>a[i];

    }
    cout<<"sorted array are\n";
    for(i=0 ; i<size; i++)
    {
        cout<<" "<<a[i]<< " ";
    }
    int largest=a[0];
    for(i=1; i<size; i++)
    {
        if(a[i] > largest)
        {
            largest=a[i];
        }
    }
        cout << "\nthe largest elements in an array are "<< largest;

    
    return 0;

}