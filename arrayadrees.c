#include<stdio.h>   // print adress of element in c
int main(){
    int arr[5]={12,3,5,6,7};
    for(int i=0; i<5; i++ ){
    printf("%p ",&arr[i]);}
    return 0;
}