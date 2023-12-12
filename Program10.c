//Program to differentiate pass by value and pass by reference by swapping two numbers using function
#include<stdio.h>
void main()
{
int a=10,b=20; 
void swap(int,int);
void swap1(int*,int*); 
printf("before swapping");
printf("A=%d\t B=%d\n",a,b);
swap(a,b);
printf("after swapping");
printf("A=%d\t B=%d\n",a,b);
swap1(&a,&b);
printf("after swapping");
printf("A=%d\t B=%d\n",a,b);
}
void swap(int x,int y)
{
int t=x;
x=y;
y=t;
}
void swap1(int *x,int *y)
{
int t=*x;
*x=*y;
*y=t;
}