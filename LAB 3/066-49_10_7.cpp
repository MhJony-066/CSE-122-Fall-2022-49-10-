//Codefoces Problem NO :263A
//Problem Name :Beautiful Matrix



#include<iostream>
using namespace std;
int main()
{
int a=0,j;
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
cin>>a;
if(a==1)
cout<<abs(i-3)+abs(j-3)<<endl;
}
}

