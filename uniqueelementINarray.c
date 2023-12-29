// find the unique no in a array where all the elements are beimg repeated twice with one value being unique

#include<stdio.h>
#include<stdbool.h>
int main(){
   int arr[7]={1,2,3,8,1,8,3};
   for(int i=0;i<7; i++){
    bool flag =false;
    for(int j=i+1; j<7 ;j++){
        if(arr[i]==arr[j]){
            flag= true;
        }

    }
    if(flag==false){
        printf("%d ",arr[i]); 
        break;    // remove break; to print all umique value
    }
   }
    return 0;
}
