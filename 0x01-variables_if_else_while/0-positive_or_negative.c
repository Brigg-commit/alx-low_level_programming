#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints is posetive, negative
* or zero
*Return: returns zero if program exits well.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
	return (0);
}
<<<<<<< HEAD
=======
chmod u+x 0-positive_or_negative.c
git add .
git commit -m "Negative or positive value"
git push 
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
