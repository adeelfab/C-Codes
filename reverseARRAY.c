// rever elements of array  without using any extra array

#include<stdio.h>
void reverse(int arr[]){
  int i=0;              //for(int i=0,j=6;i>j;i++,j--){
  int j=5;              //   int temp=arr[i];
  while (i<j){            // arr[i]=arr[j];
    int temp=arr[i];       // arr[j]=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  } return;
}
int main(){
int arr[6]={1,2,3,4,5,6};
reverse(arr);
for(int i=0; i<6;i++){
    printf("%d ",arr[i]);}

return 0;
}