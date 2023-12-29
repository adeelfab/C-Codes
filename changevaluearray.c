// given an array of integer, change the value of all odd index elements to its second multiple and increment all even index value by 10
#include<stdio.h>  
int main ()
{
 int arr[6];
 for(int i=0; i<6; i++)   {
    printf("enter the value");
    scanf("%d",&arr[i]);
 }
 for(int i=0; i<6; i++){
    if(arr[i]%2 !=0){
    arr[i]=2*arr[i];
    printf("%d ",arr[i]);}
    else{
    arr[i]=10+arr[i];
    printf("%d ",arr[i]);}
 }
 return 0;
}