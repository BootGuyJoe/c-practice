/*
 * NAME: pun.c
 * PURPOSE: Prints a bad pun. Various examples from chapter 2 because, hey, why not?
 * AUTHOR: Joey "BootGuyJoe" Hanley
 * DATE WRITTEN: 1/28/2014
 */

#include <stdio.h> /* preprocessor directive to include 'stdio.h', the default C input/output library. */

main() /* main function that must exist in every C program */
{
    /*
     * VARIABLE DECLARATIONS 
     */
               
    int height, length, width, volume; /* 'int', short for integer can store a whole number, but nothing too big or small. */
    float profit; /* 'float', short for floating-point, can hold much larger numbers than 'int', including numbers with decmials, but usually takes longer to compute. */

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width
    profit = 2150.48
    
    printf("To C, or not to C: that is the question.\n"); /* '\n' tells 'printf' to advance to the next line after printing the message. */
    printf("We can write... \n Multiple lines of text... \n In just one line of code!\n"); /* Multiple instances of '\n' are allowed on a single line of code. */
    printf("Height: %d\n", height) /* '%d' is a placeholder for a 'int' type variable. */
    printf("Profit: $%.2f\n", profit) /* '%f' is a placeholder for a 'float' type variable. The number inbetween dictates how many decimal places are printed. */
    printf("Height: %d, Length: %d\n", height, length); /* There's no limit to the number of variables that can be printed by a single call to 'printf'. */
    
    return 0; /* Returns the number 0 to the operating system upon terminiation, indicating a succsesful program run. */
}