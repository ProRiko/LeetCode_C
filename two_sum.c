#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j; // this is initialising two iterations
    int *ret_arr = (int*) malloc(2 * sizeof(int)); //initializing the malloc
    if(ret_arr == NULL || nums == NULL || numsSize < 2){ // checking for exceptions
        *returnSize = 0;
        return NULL;
    }
    for(i = 0; i<numsSize; i++){ //traversing the array
        for(j = i+1; j<numsSize; j++) {//traversing the adjacent element
            if(nums[i] + nums[j] == target) { //if the condition satisfies
                *returnSize = 2; //this is stating the new array size
                ret_arr[0] = i;
                ret_arr[1] = j; //setting the values
                return ret_arr;
                }
            }
    }
    *returnSize = 0; // if there is no solution
    free(ret_arr);
    return NULL;
}

int main (){
    int a[] = {2,5,7,11,6};
    int rs, target = 13;
    int *p =NULL;

    p = twoSum(a, sizeof(a)/sizeof(a[0]), target, &rs);

    if(rs == 0){
        printf("Tagert not found \n");
    }
    else{
        printf("Target found ar the indices %d and %d \n", p[0],p[1]);
        free(p);
    }
    return 0;
}