/**
 * @file  ioHandler.h
 * @author Nicholas Florian
 * @date November 2017 - Marh 2018
 * @brief File containing the function definitions of the ioHandler
 */

#ifndef IO_HANDLER
#define IO_HANDLER

/**read user input
 *@return user input int
 **/
int softenIntInput();

/**check if string can be a letter
 *@pre meant for selecting options from 0 and up
 *@return the int it becomes, or -1 if not
 *@param in is the string the user wants to check
 **/
int softenInt(char *in);

/**Function to read user input
 *@return user input string
 **/
char* softenStringInput();

#endif
