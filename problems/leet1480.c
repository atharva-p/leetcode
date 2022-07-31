#include <stdio.h>
#include <string.h>

void runningSum(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            array[i] = array[i] + array[j];
            printf("within loop for i = %d sum is %d \n", i, array[i]);
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    printf("array before modification\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    runningSum(&array[0], size);
    printf("\narray after modification");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", array[k]); // 1 2 3 4 -> 1 3 6 10
    }
    return 0;
}