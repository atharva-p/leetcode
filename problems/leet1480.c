#include <stdio.h>
#include <stdlib.h>

int *runningSum(int *array, int size)
{
    int *answer = (int *)malloc(size * sizeof(int));
    answer[0] = array[0]; // answer[i] = *(answer + i);
    for (int i = 1; i < size; i++)
    {
        answer[i] = array[i] + answer[i - 1];
    }
    return answer;
}

int main()
{
    int nums[] = {3, 1, 2, 10, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    int *runningSumAns = runningSum(&nums[0], size);
    // printing runningSumAns
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(runningSumAns + i));
    }
    free(runningSumAns);
    return 0;
}