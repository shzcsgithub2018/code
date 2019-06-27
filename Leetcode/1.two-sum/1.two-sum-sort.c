/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct {
    int num;
    int pos;
}numPos;

int cmp(const void* a, const void* b) {
    return ((numPos* )a)->num > ((numPos* )b)->num;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    numPos numsPosArr[numsSize+1];
    int i = 0;
    int j = numsSize - 1;
    int sum;
    int* res = (int* )malloc(sizeof(int)*2);
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        numsPosArr[i].num = nums[i];
        numsPosArr[i].pos = i;
    }
    qsort(numsPosArr,numsSize,sizeof(numPos),cmp);
    while (i < j) {
        sum = numsPosArr[i].num + numsPosArr[j].num;
        if (sum == target) {
            res[0] = numsPosArr[i].pos;
            res[1] = numsPosArr[j].pos;
            break;
        } else if (sum > target)
            j--;
        else
            i++;  
    }
    return res;
}



