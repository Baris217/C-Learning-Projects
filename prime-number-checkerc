#include <stdio.h>
#include <math.h>

int main()
{

    int a;
    int i;
    int prime = 1;

    printf("Write your number:");
    scanf("%d", &a);

    if (a == 2)
    {

        printf("This number is a prime number");
    }

    else if (a <= 0)
    {

        printf("Please enter a positive value");
    }

    else if (a % 2 == 0)
    {

        printf("This number is not a prime number");
    }

    if (a % 2 == 1)

    {

        if (a == 1)
        {

            printf("This number is not a prime number");
        }

        for (i = 2; i <= sqrt(a); i++)
        {

            if (a % i == 0)
            {

                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {

            printf("This number is a prime number");
        }

        else if (prime == 0)
        {

            printf("This number is not a prime number");
        }
    }

    return 0;

}
