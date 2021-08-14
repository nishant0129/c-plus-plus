#include <iostream>
using namespace std;
int main()
{ int space, row,i,j;
  cout << "enter the value of row";
  cin>> row;
  //int i,j,space,row;
  for(i=1; i<=row; i++)
  {
      for(space=1; space<=row-i; space++)
      cout <<"  ";
      for (j=1; j<=i; j++)
      cout << "* ";
    
  
      cout << endl;
  }
  return 0;
   
}