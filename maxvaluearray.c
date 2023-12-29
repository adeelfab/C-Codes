#include<stdio.h>
int main()
{
    int arr[7]={1,2,34,45,56,7,90};
    int max=-1;
    for(int i=0; i<7; i++){
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}