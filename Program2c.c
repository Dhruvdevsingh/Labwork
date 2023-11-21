// Program to find the Euclidean distance between two pionts in a plane
#include<stdio.h> 
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    printf("Enter the Points:");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    int dis;
    dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance between the two points is:%d",dis);
}