//CODEFORCE PROBLEM NO :158A
//PROBLEM :NEXT ROUND

#include<iostream>
using namespace std;
int main()
{
 int x,y,z[100],a=0,i;
 cout<<"enter your number:";
 cin>>x>>y;
 for(int i=0;i<x;i++)
 {
  cin>>z[i];
  if((z[i]>=z[y-1])&&(z[i]>0))
    a++;

 }cout<<a;
}
