#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ioHandler.h"

int softenIntInput(){
    
    //var
	char *in;
	int softInt;
	
	
	softInt = 0;
	
	//allow up to 30 digit long numbers
	in = malloc(sizeof(char) * 31);
	
    //get user input as a string
    fgets(in, 30, stdin);
    
    //use atof in order to convert
    softInt = atof(in);
    
    //return a flag for incorrect data
    
    /*
     * atof defualts to a value of 0 if the string
     * is not a valid number. If the user doesnt
     * enter 0 as the first character then it
     * returns -1.
     */
    
    if((int)in[0] != 0 && softInt == 0){
     
        //softenIntInput returns -1 for incorrect numbers
        free(in);
        return -1;
     
    }
    
    free(in);
    return softInt;
	
}

int softenInt(char* in){
    
    //var
	int softInt;
	
	
	softInt = 0;
	
    //use atof in order to convert
    softInt = atof(in);
    
    //return a flag for incorrect data
    
    /*
     * atof defualts to a value of 0 if the string
     * is not a valid number. If the user doesnt
     * enter 0 as the first character then it
     * returns -1.
     */
    
    if((int)in[0] != 0 && softInt == 0){
        
        //softenInt returns -1 for incorrect numbers
        free(in);
        return -1;
        
    }
    
    return softInt;
    
}

char* softenStringInput(){
	
	//var
	char *softenString;
	char *shortenedString;
	
	
	//allow up to 80 character words
	softenString = malloc(sizeof(char) * 81);

    //get input
    fgets(softenString, 80, stdin);
	
	shortenedString = shortenStringLength(softenString);
	
	free(softenString);
	return shortenedString;
	
}

char* shortenStringLength(char *stringToShorten){
	
	//var
	int count;
	char *before;
	char *after;

	
	//create memory thats the right size for the string
	count = strlen(stringToShorten) + 1;
	before = malloc(sizeof(char) * count);
	
	//return a new string the correct size,
	strncpy(before, stringToShorten, count);
	
	//remove trailing end character if present
	if(before[count - 2] == '\n'){
		
		//set end char
		before[count - 2] = '\0';
		
		//Create the even better size
		after = malloc(sizeof(char) * (count -1));
		
		//copy without trailing end
		strncpy(after, before, count - 1);
		
		
		//return new word
		free(before);
		return after;
		
	}
	
	return before;

	
}
