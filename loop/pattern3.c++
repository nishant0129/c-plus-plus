#include <iostream >
using namespace std;
int main()
{
    char input ;
    char i,j;
   // cout << "enter the value of input to print pattern ";
    //cin>> input;
    for(i='A'; i<='F'; i++)
    {
        for(j='A';j<=i; j++)
        {
            cout << i<< " ";
        }
        cout << endl;
    }
    return 0;
}