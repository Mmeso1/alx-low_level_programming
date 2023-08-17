#include <stdio.h>

/**
* main - Entry point
* Return: 0 for success
* Description: Print fibonacci
*/
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next;
unsigned long sum = 0;

while (fb1 <= 4000000)
{
if (fb1 % 2 == 0)

sum += fib1;

next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}

printf("%lu\n", sum);
return (0);
}
