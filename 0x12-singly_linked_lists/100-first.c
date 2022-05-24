#include <stdio.h>

/**
 * hare - prints a string before the main function executes
 */

void __attribute__((constructor)) hare(void)
{
	printf("You're beat! and yet, you must allow,\\nI bore my house upon");
	printf("my back!\\n\n");

}
