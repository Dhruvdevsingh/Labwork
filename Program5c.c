// program to check whether a number is Armstrong or not using while loop
#include<stdio.h>
#include<math.h>
void main()
{
    int number,originalnumber,remainder,result=0,n=0;
    printf("Enter an integer");
    scanf("%d",&number);
    originalnumber=number;
    while(originalnumber!=0)
    {
     originalnumber/=10;
     ++n;
     }
     originalnumber=number;
     while(originalnumber!=0)
    {
        remainder=originalnumber%10;
        result+=pow(remainder,n);
        originalnumber/=10;
    }
    if(result==number)
    {
        printf("%d is an armstrong number\n",number);
    }
    else
    {
      printf("%d is not an armstrong number\n",number);
    }
} 