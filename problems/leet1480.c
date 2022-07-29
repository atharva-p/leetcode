#include <stdio.h>

// int runningSum(int* nums[], int* numsSize, int* returnSize)
// {
//     for (int i = 0; i < numsSize; i++)
//     { // i = 2
//         for (int j = i - 1; j >= 0; j--)
//         {
//             nums[i] = nums[i] + nums[j];
//         }
//     }
//     return nums;
// }

int runningSum(int *nums[])
{
    return *nums;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int numsSize = 4;
    int returnSize = 0;

    runningSum(&nums);
    return 0;
}