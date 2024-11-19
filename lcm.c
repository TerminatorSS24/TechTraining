#include <stdio.h>

int lcm_recursive(int a, int b, int multiple)
{
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return lcm_recursive(a, b, multiple + 1);
}

int lcm_non_recursive(int a, int b)
{
    int max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("LCM is only defined for positive integers.\n");
        return 1;
    }

    printf("Choose the method to calculate LCM:\n");
    printf("1. Recursive Method\n");
    printf("2. Non-Recursive Method\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    int lcm;
    if (choice == 1) lcm = lcm_recursive(a, b, (a > b) ? a : b);
    else if (choice == 2) lcm = lcm_non_recursive(a, b);
    else
    {
        printf("Invalid choice. Please select 1 or 2.\n");
        return 1;
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
