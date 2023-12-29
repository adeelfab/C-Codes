#include<stdio.h>
int main(){
    int arr[5], f=1, i;
    for(i=0; i<5; i++){
    printf("enter the elements");
    scanf("%d",&arr[i]);}
    for(i=0; i<5; i++)
    {
        f=f*arr[i];
    }
    printf("%d",f);
    return 0;
}