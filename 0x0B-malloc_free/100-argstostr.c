#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
		char *new_string = NULL;
		int b = 0, i = ac, y, sum = 0, temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != NULL)
		{
			while (b < i)
			{
				for (y = 0; av[b][y] != '\0'; y++)
					new_string[y + temp] = av[b][y];
				new_string[temp + y] = '\n';
				temp += (y + 1);
				b++;
			}
			new_string[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
