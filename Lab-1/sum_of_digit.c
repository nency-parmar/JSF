#include <stdio.h>

int main()
{
    int num, sum = 0, rem;

    printf("Enter a Number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }

    printf("Sum of Digits : %d", sum);

    return 0;
}