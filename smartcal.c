#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

#include <stdio.h>
int main()
{
        double num1;
        double num2;
        char op;
        printf("what is your first number?\n");
        scanf("%lf", &num1);
        printf("which operator?\n");
        scanf(" %c", &op);
        printf("what is your second number?\n");
        scanf("%lf", &num2);

        if ( op== '+') {
        printf ("%f", num1 + num2);
} else if (op == '-') {
printf("%f", num1 - num2);
} else if (op == '/') {
printf("%f", num1 / num2);
} else if (op == '*') {
printf("%f", num1 * num2);
} else {
printf("invalid op\n");
}
return 0;
}
