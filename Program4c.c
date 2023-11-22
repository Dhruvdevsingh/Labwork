// Program to find maximum of n numbers using for loop
#include<stdio.h>
void main()
{
    int i,n;
    float num,maximum;
    printf("Enter the Number of Elements:");
    scanf("%d",&n);
    maximum=-999999999;
    for(i=0;i<n;++i)
    {
        printf("Enter the Number:");
        scanf("%f",&num);
        if(num>maximum)
        {
            maximum=num;
        }
    }
    printf("Maximum Nmber is:%.2f\n",maximum);
}