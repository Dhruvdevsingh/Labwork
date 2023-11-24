// Program to sort an array using bubble sort
#include<stdio.h>
void main()
{
    int arr[30],i,num,temp,j;
    printf("Enter the size of an array:");
    scanf("%d",&num);
    printf("Enter the values of an array:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
    printf("%d",arr[i]);
    }
    for(i=0;i<num;i++)
    {
    for(j=0;j<num-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
        }
        }
        printf("\nSorted elements are:");
        for(i=0;i<num;i++)
        {
        printf("\n%d",arr[i]);
        }
        }