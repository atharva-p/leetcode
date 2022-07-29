// Given two non - negative integers low and high.Return the count of odd numbers between low and high(inclusive).

#include <stdio.h>
#include <string.h>

int countOdds(int low, int high)
{
    int answer;
    int range = (high - low) + 1;
    if (range % 2 == 0)
    {
        answer = range / 2;
    }
    else if (range % 2 != 0)
    {
        if (low % 2 == 0 && high % 2 == 0)
        {
            answer = range / 2;
        }
        else if (low % 2 != 0 && high % 2 != 0)
        {
            answer = ((range / 2) + 1);
        }
    }
    return answer;
}

int main()
{
    int answer = countOdds(1, 100);
    printf("%d", answer);

    return 0;
}