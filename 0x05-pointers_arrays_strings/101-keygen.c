#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
=======
 * main - Generate random valid passwords for the
 * program 101-crackme.
 * Return : Always 0.
 * *
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
 */
int main(void)
{
char password[84];
int index = 0, sum = 0, diff_half1, diff_half2;
srand(time(0));
while (sum < 2772)
{
password[index] = 33 + rand() % 94;
sum += password[index++];
}
<<<<<<< HEAD
password[index] = '\0';
=======
password[index] = 0;
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;
<<<<<<< HEAD
if ((sum - 2772) % 2 != 0)
diff_half1++;
for (index = 0; password[index]; index++)
{
if (password[index] >= (33 + diff_half1))
=======
if ((sum - 2772) % 2 !=0)
diff_half1++;
for (index = 0; password[index]; index++)
{
if (password[index] >= (33+diff_half1))
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
{
password[index] -= diff_half1;
break;
}
}
for (index = 0; password[index]; index++)
{
if (password[index] >= (33 + diff_half2))
{
password[index] -= diff_half2;
break;
}
}
}
printf("%s", password);
<<<<<<< HEAD
return ('0');
=======
return (0);
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
}
