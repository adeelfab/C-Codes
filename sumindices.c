// find the diff b\w the sum of wlwments at even indices to the sum of elements at odd indices

#include<stdio.h>
int main(){
    int arr[5]={1,2,4,2,6};
    int sumeven=0, sumodd=0, i,diff=0;
    for(i=0; i<5; i++){
    if(i%2==0){
    sumeven=sumeven + arr[i];}
     else{
   sumodd=sumodd + arr[i];}}

    printf("sum even is %d\n",sumeven);
    printf("sum odd is %d\n",sumodd);
    diff=sumeven - sumodd;
    printf("diff is %d",diff);
    return 0;

}