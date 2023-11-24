// Program to check if a number is prime or not using a whilwe loop
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=2;
    while(i<=n/2)
    {
      if(n%i==0)
        {
         count=1;
         break;
        }
        i++;
    }
        if(count==0)
        printf("%d is a prime number \n",n);
        else
        printf("%d is not a prime number\n",n);
    }