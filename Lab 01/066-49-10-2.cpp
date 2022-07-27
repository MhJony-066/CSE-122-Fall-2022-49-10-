//CODEFORCE PROBLEM : 71A
//PROBLEM NAME : WatermelonWay Too Long Words

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,c;
    char x[500];
    cin>>a;
    for(int i=0;i<a;i++)
    {
       cin>>x;
       c=strlen(x);
       if(c<=10)
        cout<<x<<endl;
       else
       cout<<x[0]<<c-2<<x[c-1]<<endl;
    }
    return 0;
}

