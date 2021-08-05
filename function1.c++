#include<iostream>
using namespace std;
void findgreator(int x , int y)
{
if(x>y)
{ 
  cout << " x is greator than y"<<endl;
  
}
    cout << " y is greator than x"<<endl;
    return;

}
int main()
{ 
    findgreator(10,20);
    findgreator(20,10);
    return 0;
}