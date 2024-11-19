#include <stdio.h>
int reverse(int num)
{
    int temp = num, c = 0;
    while (temp != 0)
    {
        c = c * 10 + (temp % 10);
        temp /= 10;
    }
    if (num != c)
        return 0;
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (reverse(num))
        printf("%d is an Palindrome number.\n", num);
    else
        printf("%d is not an Palindrome number.\n", num);

    return 0;
}