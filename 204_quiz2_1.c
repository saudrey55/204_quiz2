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
        for ( i = 2; i < a; i++)
        {
            if (a%i==0)
            {
                a=a/i;
                x++;
                for ( j = 2; i < a; i++)
                {
                    if (a%i==0)
                    {
                        a=a=a/i;
                        x++;
                        for ( k = 2; k < a; k++)
                        {
                           if (a%j==0)
                           {
                               a=a=a/i;
                                x++;
                           }
                           else if (a==1)
                            {
                                break;
                            }
                        }
                        
                    }
                    else if (a==1)
                    {
                        break;
                    }
                    
                }
            }
            else if (a==1)
            {
                break;
            }
            
        }  
    }
    printf("%d",x);
     /*if (x>=3)
        {
            printf("Not Cube Free");
        }
        else
        {
            printf("%d",z-1);
        }*/
}