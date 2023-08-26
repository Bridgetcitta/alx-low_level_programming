#include <stdio.h>

void preMainPrint(void)__attribute__((constructor));
/**
 * preMainPrint - prints a sentence before the main
 * function is executed
 */

void preMainPrint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
