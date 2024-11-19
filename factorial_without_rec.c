#include <stdio.h>
int fact(int num)
{
    int res = 1;
    for (int i = 1; i <= num; i++)
        res *= i;
    return res;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d is : %d", n, fact(n));
    return 0;
}