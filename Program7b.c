// Program to perform Matrix Multiplication
#include<stdio.h>
void main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
    printf("\n Enter the First matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("Enter the elements mat1[%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n Enter the Second matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("Enter the elements mat2[%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Print the first matrix\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       printf("%d\t",mat1[i][j]);
     }
      printf("\n");
    }
     printf("Print the second matrix \n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
     printf("%d\t",mat2[i][j]);
    }
    printf("\n");
    }
    printf("Matrix Multiplication");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            mat3[i][j]=0;
            for(k=0;k<3;k++)
            {
                mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
        }
        }
        }
        printf(" the third matrix is:\n");
        printf("Print the Third/Multiplication Matrix \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++){
                printf("%d\t",mat3[i][j]);
            }
            printf("\n");
        }
}