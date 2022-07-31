#include <stdio.h>

int calculateSum(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i]; // array[i] = *(array + i) dereferencing
    }
    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);

    int total = calculateSum(&array[0], size);
    printf("the sum is: %d", total);
    return 0;
}

// find the error
//  int calculateSum(int *array[], int sum)