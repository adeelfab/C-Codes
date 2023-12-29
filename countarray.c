// count the no of element in given array greater than a given no x.

#include<stdio.h>
int main()
{
    int x=3;
    int arr[5];
    for(int i=0; i<5; i++){
        printf("enter the value");
        scanf("%d",&arr[i]);
    }
     for(int i=0; i<5; i++){
        if(arr[i]>3)
        printf("gteater no is %d\n",arr[i]);
     }
     return 0;

}