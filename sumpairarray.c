// find the total no of pair in aaray whose sum is equal to given value of x
#include<stdio.h>
int main()
{
    int arr[6]={1,4,2,7,6,12};
    int x=8; int totalpair=0;
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(arr[i]+arr[j] == x){
                totalpair ++;
              //  printf("%d %d\n",arr[i],arr[j]);   for value of array
             // printf("%d %d\n",i,j); for index no
            }
        }
    }
    printf("%d",totalpair);
    return 0;
}