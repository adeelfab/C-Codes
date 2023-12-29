// GIVEN ARRAY AND A NO. X. FIND OUT IF X LIES IN THE ARRAY OR NOT if tes printn the index.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    for(int i=0;i<7; i++){
        if(arr[i]==x){
        printf("%d is present in array\n",x);
        printf("and inex is %d",i);
        break;
        }
    }
    return 0;
}
