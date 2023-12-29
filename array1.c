#include<stdio.h>
int main()
{
int arr[5];
 for(int i=0; i<5; i++)
 {
    printf("enter the elements %d",i);
 scanf("%d",&arr[i]);
 }
 printf("%d ",arr[4]);
 
 return 0;
}