#include "main.h"
#include <stdio.h>

/**
 * mul - is a function that computes the product of two number
 * @a, @b,:are the protootypes of the code
 * Result: 1 for the result and 0 otherwise
 */
int mul(int a, int b) 
{
    int result = a * b;
    return (result);
}
int main(void) 
{
    int num1, num2, product;

    printf("Enter the first integer: ");

    scanf("%d", &num1);
    printf("Enter the second integer: ");

    scanf("%d", &num2);

    product = mul(num1, num2);

    printf("The product of %d and %d is %d.\n", num1, num2, product);

    return (0);
}
