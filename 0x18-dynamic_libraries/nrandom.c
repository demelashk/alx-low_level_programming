#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * printf - writes out the out put.
 * @format - writes out the string.
 * Return - exit status.
 */
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 -9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}

