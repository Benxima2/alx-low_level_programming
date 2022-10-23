/*
 * File: 100-first.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

void __attribute__ ((constructor)) hare(void);

/**
 * hare - Print a string before the
 * main functionis executed.
 */
void hare(void);
{
	printf("you're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
