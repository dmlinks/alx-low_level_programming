#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j = 0;
	int cat = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[cat] = av[i][j];
			cat++;
			j++;
		}
		str[cat] = '\n';
		cat++;
	}
	str[cat] = '\0';

	return (str);
}
