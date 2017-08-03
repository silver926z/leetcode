#include <stdio.h>
#include <stdlib.h>



int* twoSum(int* nums, int numsSize, int target) {
    int *ret = (int*)malloc(sizeof(int)*2);
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j] == target){
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
    return ret;
}
int main(int argc, char **argv){
    int array[] = {2, 7, 11, 15};
    int* result = twoSum(array, 4, 9);
    printf("The index1: %d; the index2: %d\n", result[0], result[1]);
    free(result);//memory deallocation
    return 0;
}