#include<stdio.h>

int main()
{
    int a,i,j,k,x=0,z;

    scanf("%d",&a);
    z=a;
    if (a==1)
    {
        printf("1");
    }
    else if (a == 2)
    {
        printf("2");
    }
    else if (a == 3)
    {
        printf("3");
    }
    else if (a == 4)
    {
        printf("4");
    }
    else if (a == 5)
    {
        printf("5");
    }
    else if (a == 6)
    {
        printf("6");
    }
    else if (a == 7)
    {
        printf("7");
    }
    else
    {
        for ( i = 2; i <=a; i++)
        {
            if (a%i==0)
            {
                a=a/i;
                x++;
               if (a%i==0)
               {
                   a=a/i;
                   x++;
                   if (a%i==0)
                   {
                       a=a/i;
                       x++;
                   }
                   else
                   {
                       break;
                   }
                   
               }
               else
               {
                   break;
               }
               
            }
            else
            {
                continue;
            } 
        }  
    }
     if (x>=3)
        {
            printf("Not Cube Free");
        }
        
} 