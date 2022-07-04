#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print last digit of a number as zero, less greater than 5 or less than six
 *
 * Description: using the main function
 * this program prints "Last digit is greater than five,zero or less than six and not equal to zero
 * Return: 0
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
}
