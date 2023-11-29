//Program to calculate factorial of a number using recursion
#include<stdio.h>
int fact1(int);
void main(){
int a,fact; 
printf("Enter the number:"); 
scanf("%d",&a);
fact=fact1(a); 
printf("Factorial of %d is:%d",a,fact);
}
int fact1(int x){
if(x<=0)
return 1;
else
return x*fact1(x-1);
}