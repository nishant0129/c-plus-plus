#include<iostream>
using namespace std;
int main()
{
int n,s,i,j;
cout<<"enter rows";
cin>>n;
for(i=1;i<=n;i++){
for(s=i;s<=n;s++)
cout<<" ";
for(j=1;j<=i;j++)
{
if(j==1||j==i||i==n)
cout<<"* ";
else
cout<<"  ";
}
cout<<"\n";
} 
//for(i=0; i<=n; i++)
//cout<<"* ";

return 0;
}