#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
    printf("enter the value");
    scanf("%d",&arr[i]);}
     int max=arr[0];
     for(int i=0;i<5; i++)
     {
        if(max<arr[i])
        max=arr[i];}
     printf("max is %d",max);
     return 0;
}