#include<stdio.h>
int main ()
{
   int arr[5];
   for(int i=0; i<5; i++){
   printf("enter the elements ");
   scanf("%d",&arr[i]);}
   int sum=0;
   for(int i=0;i<5; i++)
   {
    sum=sum+arr[i];
   }
   printf("%d",sum);

return 0;
}