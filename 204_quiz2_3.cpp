#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n,x,j,d[10],z,c,i,y=0;
    cin>>n;
    x=n;

    for ( i = 0; n==1||n==0;i++ )
    {
        if (n/10)
        {
            y++;
        }
       
    }
    for ( j = 0; j <y; j++)
    {
    d[j]=x%10;
    x=x/10;
    }
    int b=0;
     for ( j = 0; j <10; j++)
    {
    if (d[j]==n)
     {
        b++;
      
     }
    else
    {
        continue;
    }
    }
    cout<<b;

    
}