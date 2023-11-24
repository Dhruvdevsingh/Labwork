#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20],str3[20];
    int res;
    printf("Enter the string 1:\n");
    scanf("%s",str1);
    printf("Enter the string 2:\n");
    scanf("%s",str2);
    printf("Concatenation string is:%s\n",strcat(str1,str2));
    res=strcmp(str1,str2);
    printf("Compare string Result is:%d\n",res);
    strcpy(str3,str1);
    printf("First String is:%s\n",str1);
    printf("Third string is :%s\n",str3);
    printf("Third string Lower case is:%s\n",strlwr(str3));
    printf("Third string Upper case is:%s\n",strupr(str3));
}