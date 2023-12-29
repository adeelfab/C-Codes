#include<stdio.h>  // reverse elementd of array in another array
int main(){
    int arr[6]={1,2,3,4,5,6}, ar[6];
    for(int i=0;i<6; i++){
        ar[i]=arr[5-i];
    }
        for( int i=0; i<6;i++){
            printf("%d ",ar[i]);
        }
    
return 0;
}