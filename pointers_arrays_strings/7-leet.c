#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_nums[j];
				break;
			}
		}
	}
	return (s);
}

