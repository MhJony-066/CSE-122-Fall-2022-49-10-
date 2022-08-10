//Codefoces Problem NO :231A
//Problem Name :Team

#include<iostream>
using namespace std;
int main()
{
 int n,x,y,z,sum=0;
 cout<<"enter your number: ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>x>>y>>z;
  if((x==1&&y==1)||(y==1&&z==1)||(x==1&&y==1))
  sum=sum+1;
 }cout<<sum;
}
