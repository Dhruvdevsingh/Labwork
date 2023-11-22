// Program to print the Fibonacci Sequence using for loop
#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,num;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("Fibonacci Sequence");
    for(i=1;i<=n;++i)
    {
        printf("%d\n",a);
        num=a+b;
        a=b;
        b=num;
    }
}