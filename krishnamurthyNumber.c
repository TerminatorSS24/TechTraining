#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;

    return num * factorial(num - 1);
}
int isKrishnamurthyORPetersonORStrongNumber(int number)
{
    int sum = 0, c = 0, temp = number, org = number;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == org;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isKrishnamurthyORPetersonORStrongNumber(num))
        printf("%d is an Krishnamurthy number.\n", num);
    else
        printf("%d is not an Krishnamurthy number.\n", num);

    return 0;
}