/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**Hack Test:[-1,8191,4095,11,15] 4094
 * Ouput: [0,1]
 * Expect:[0,2]
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int max_size = 4095;
    int indexarr[4096] = {0};
    int diff = 0;
    *returnSize = 2;
    int* res = (int* )malloc(sizeof(int)*2);
    int new_index;

    for (int i = 0; i < numsSize; i++) {
        diff = target - nums[i];
        new_index = diff & max_size;
        if (indexarr[new_index] != 0) {
            res[0] = indexarr[new_index] - 1;
            res[1] = i;
            break;
        }
        indexarr[nums[i] & max_size] = i + 1;
    }
    return res;
}



