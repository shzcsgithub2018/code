/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* res = (int* )malloc(sizeof(int)*2);
    int flag = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                res[0] = i;
                res[1] = j;
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }
    return res;
}



