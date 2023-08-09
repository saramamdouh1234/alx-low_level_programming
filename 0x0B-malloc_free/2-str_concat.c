#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: pionter to realy allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	 for (i = 0; s2[i] != '\0'; i++)
                s2len++;

	 ptr = malloc(sizeof(char) * (s1len + s2len) + 1);

	 if (ptr == NULL)
		 return NULL;
	 for (i = 0; s1[i] != '\0'; i++)
		 ptr[i] = s1[i];
	 for (i = 0; s2[i] != '\0'; i++)
		 ptr[s1len + i] = s2[i];
	 return (ptr);
}

