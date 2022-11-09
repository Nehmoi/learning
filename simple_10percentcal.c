#include <stdio.h>

/**
* main - Entry point
*
* @a: number input
* @b: number calculated
* @c: number to be used
* @d: number to be used
* @n: number to be used
*
* Description: A simple loan calculator for daily interest and total
* payable amount for 14 days time frame.
*
* Return: Always (0) success
*/
int main()
{
    int a, b;
    double c = 1, d = 100;

    printf("Welcome to Gut-Dinero\n");
    printf("Please enter Amount: ");
    scanf("%d", &a);
    b = c/d*a;

    printf("Loan amount: %d\n", a);
    printf("Daily interest: %d\n", b);
    printf("14-days Accumulation: %d\n", b*14);
    printf("Total payable: %d\n", a + (b*14));
    getch();
    return (0);
}
