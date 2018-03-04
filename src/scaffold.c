#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ioHandler.h"

int main(int args, char **argv){
	
	//Var
	char* in;
	int num;
	
	while(strcmp((in = softenStringInput()), "q") != 0)
		if(strcmp(in, "s") == 0)
			while(strcmp((in = softenStringInput()), "q") != 0)
				printf("STRING:\t<%s>\n", in);
		else if(strcmp(in, "i") == 0)
			while((num = softenIntInput()) != -1)
				printf("INT:\t\t<%d>\n", num);
		else
			printf("REGULAR:\t<%s>\n", in);
	
	return 0;
	
}
