#include <stdio.h>
int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int armstrong(int num)
{
    int temp = num, sum = 0, c = 0, orgnum = num;
    while (temp != 0)
    {
        c++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += power(digit, c);
        temp /= 10;
    }
    return sum == orgnum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}