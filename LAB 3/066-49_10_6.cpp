//CODEFORCES PROBLEM NO :282A
//PROBLEM Name :Bit++


#include<iostream>
using namespace std;
int main()
{
 int n,a=0;
 char x[40];
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cin>>x;
 if(x[1]=='+')
 a++;
 if(x[1]=='-')
 a--;
 }
 cout<<a<<endl;
}
