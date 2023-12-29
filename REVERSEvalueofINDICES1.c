

#include<stdio.h>
void reverse(int arr[], int si,int ei){
  int i=si;              //for(int i=0,j=7;i<j;i++,j--){
  int j=ei;              //   int temp=arr[i];
  while (i<j){            // arr[i]=arr[j];
    int temp=arr[i];       // arr[j]=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  } return;
}
int main(){
int arr[7]={1,2,3,4,5,6,7};
reverse(arr,1,4);
// index 1-4 reverse
for(int i=0; i<7;i++){
    printf("%d ",arr[i]);}

return 0;
}