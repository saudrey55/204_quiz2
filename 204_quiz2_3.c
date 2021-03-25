#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    
    scanf("%d",&n); 

    int i,z,b=0;
    for ( i = 1; i <= n; i++)
    {
     
     if (i==n)
     {
        b++;
        printf("%d\n",b);
     }
    else
    {
        continue;
    }
    printf("0\n");
    }

   // printf("%d",b);
    
}