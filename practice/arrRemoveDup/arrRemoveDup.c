
#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize){
    int temp;
    for(int i=0; i<numsSize; i++ ){
        printf("out: %d\n",*nums+i);
    }
    return 0;
}

void main(){
    int arr[3]={1,1,2};
    int *p;
    p=arr;
    removeDuplicates(p,3);

}