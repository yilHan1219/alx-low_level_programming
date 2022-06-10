#include "main.h"
#include<unistd.h>
/**
 * -islower- Check description
 * @c: an input character
 *
 * Return: 1 if is lowecase or 0 if uppercase
 */
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if ( i == c)
lower = 1;
}
return(lower);
}
