#include <stdio.h>

int main()
{

    int a;
    float sum = 0;
    int count = 0;

    printf("Please write your numbers to calculate their average value write -1 to stop:");
    scanf("%d", &a);

    while (a != -1)
    {

        count++;
        sum += a;

        printf("Please write your numbers to calculate their average value write -1 to stop:");
        scanf("%d", &a);
    }

    float average = sum / count;

    if (a == -1)
    {

        printf("The average value of this numbers:%f", average);
    }

    return 0;
}