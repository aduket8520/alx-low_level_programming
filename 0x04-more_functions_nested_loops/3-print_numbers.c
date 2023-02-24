#include <stdio.h>

void print_numbers(void);

int main(void) {
    printf("Printing numbers from 0 to 9:\n");
    print_numbers();
    return 0;
}

void print_numbers(void) 
{
    for (int i = 0; i < 10; i++) {
        _putchar(i + '0');
        _putchar('\n');
    }
}

