/*
 * Program: Command Line Arguments (Lab #2)
 * Name: Brianna Drew
 * ID: 0622446
 * Date Created: 10/01/2019
 * Last Modified: 10/15/2019
*/

#include <stdio.h> // include library that includes functions for input/output
#include <stdbool.h> // include library for boolean variables
bool isValid(char); // declaration of function to determine if the argument called is valid (returns true) or invalid (returns false)

int main(int argc, char *argv[]) // main function (main program, returns integer, is passed arguments from the command line)
{
	int count; // declaration of integer variable to hold the number of arguments called
	bool valid; // declaration of boolean variable to hold the truth value of whether an argument called is valid or invalid

	if (argc > 1) // if arguments were called...
	{
		for (count = 1; count < argc; count++) // for each argument called...
		{
			valid = isValid(*argv[count]); // call function to determine whether the current argument is valid or not and store the returned boolean value in valid. Passes the current character from the list of arguments called.
			if (valid) // if a valid argument was called...
			{
				printf ("Argument %s called\n", argv[count]); // print that the argument was valid (and which character that was)
			}
			else // if an invalid argument was called...
			{
				printf ("Invalid argument -- %s\n", argv[count]); // print that the argument was invalid (and which character that was)
			}
		}
	}
	else // if no arguments were called...
	{
		puts ("No arguments called"); // outputs error statement stating as such
	}
	return 0; // return exit code to terminate program
}

bool isValid(char argument) // isValid function, called in main function and passed a character (argument called), determines if the character (argument) passed is valid (from list of valid arguments) or invalid, returns a boolean (true for valid argument, false for invalid)
{
	switch (argument) // switch statement for character argument...
	{
		// in the case that any of the following characters are entered as arguments (valid arguments)...
		case 'a':
		case 'A':
		case 'b':
		case 'x':
		case 'v':
		case 'z':
		case 'R':
			return true; // return true (for valid argument)
			break; // break from switch statement
		default: // default case (any other argument entered other than the previous valid arguments)...
			return false; // return false (for invalid argument)
	}
}
