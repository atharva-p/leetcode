#include <stdio.h>
#include <string.h>

void runningSum(int *array, int size)
{
    int answer[5];
    answer[0] = array[0];
    for (int i = 1; i < size; i++)
    {
        answer[i] = array[i] + answer[i - 1];
    }
    printf("running sum array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", answer[i]);
    }
}

int main()
{
    int nums[] = {3, 1, 2, 10, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    runningSum(&nums[0], size);
    return 0;
}