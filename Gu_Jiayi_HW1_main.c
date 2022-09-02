/**************************************************************
* Class:  CSC-415-01 Fall 2022
* Name: Jiayi Gu
* Student ID: 920024739
* GitHub Name: Jiayi079
* Project: Assignment 1 – Command Line Arguments
*
* File: <Gu_Jiayi_HW1_main.c>
*
* Description:
* 
*    Command line argument is simly anything we enter after the
*    executable name. This program is to demonstrate the usage
*    of command line arguments in a C program. We will use "make
*    run RUNOPTIONS = "(text)" to display how many arguments on 
*    the command line, and output each arguement on the console
*    after we compile the program.
*
**************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    /* print the number of arguments the user input
       arguements should be separated by space */   
    printf("There were %d arguments on the command line.\n", argc);
    
    // print out each arguement by using for loop
    for(int i = 0; i < argc; i++)
    {
        printf("Argement %d: %s\n", i, argv[i]);
    }
    
    return 0;
}
