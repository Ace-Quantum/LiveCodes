#include "main.h"
#include <stdio.h>

// Some of this documentation comes from my previous partner Clay
// Love you queen <3

/**
 * get_func - function to find format specifiers and return operation
 * @format: current character in format string
 *
 * Return: returns function from forms array on success, NULL on fail
 */

void (*get_func(char format))(va_list args)
{
    // set up the array of structs
	form forms[] = {

    };

    // Initialize your interator
	int i = 0;

    // iterate through the struct to find the format you need
	while (forms[i].op != '\0')
	{
		if (forms[i].op == format)
            // return the found function to the pointer

        // i t e r a t e
		
	}

    // If you haven't found anything, return null

}