#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the main function executes
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\\nI bore my house upon");
	printf("my back!\\n\n");

}
