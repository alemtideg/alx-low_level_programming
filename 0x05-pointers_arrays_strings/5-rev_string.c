#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string in rev
 */
void rev_string(char *s)
{
	int c = 0, index = 0;
	char tmp;

	while (s[index++])
		c++;
	for (index = c - 1; index >= c / 2; index--)
	{
		tmp = s[index];
		s[index] = s[c - index - 1];
		s[c - index - 1] = tmp;
	}
}
