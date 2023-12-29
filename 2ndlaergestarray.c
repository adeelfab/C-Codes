#include<stdio.h>
#include<limits.h>
int main(){
    // run if largest no. is not at two indices
    int arr[7]={12,2,34,56,6,9,100};
    int max = INT_MIN ; 
    int smax= INT_MIN ;
    for(int i=0; i<7; i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
            
        }
        else if(smax<arr[i]){  //  ye tab chaleha jab max > arr[i]
        smax=arr[i];}
    }
    printf("%d",smax);
    return 0;

}