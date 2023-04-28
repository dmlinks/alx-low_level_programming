#include <stdio.h>

void before_main_func(void) __attribute__ ((constructor));

/**
 * before_main_func - A function that prints a string before 
 * the main function is runned
 *
 * Return: Nothing.
 */
void before_main_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
