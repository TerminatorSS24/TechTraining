#include <stdio.h>
int isPrime(int number)
{
    if (number < 2)
        return 0;
    if (number == 2)
        return 1;
    if (number % 2 == 0)
        return 0;
    for (int i = 3; i < number / 2; i += 2)
        if (number % i == 0)
            return 0;
    return 1;
}

int main()
{
    int c = 0, num = 2, newnum, nth;
    printf("Enter the number of the prime number to be printed:");
    scanf("%d", &nth);
    while (c < nth)
    {
        if (isPrime(num))
        {
            c++;
            newnum = num;
        }
        num++;
    }
    printf("The %dth Prime number is: %d", nth, newnum);
    return 0;
}