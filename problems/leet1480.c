#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void runningSum(int *array, int size)
{
    int *answer = (int *)malloc(size * sizeof(int));
    answer[0] = array[0]; // answer[0] = *(answer + 0) and answer[i] = *(answer + i);
    for (int i = 1; i < size; i++)
    {
        answer[i] = array[i] + answer[i - 1]; // array[i] = *(array + i)
    }
    printf("running sum array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", answer[i]);
    }
    free(answer); // for later: return first and then free
}

int main()
{
    int nums[] = {1, 1, 1, 1, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    runningSum(&nums[0], size);
    return 0;
}