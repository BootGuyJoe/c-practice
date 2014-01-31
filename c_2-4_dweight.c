/*
 * NAME: dweight.c
 * PURPOSE: Computes the dimensional weight of a 12" x 10" x 8" box.
 * AUTHOR: Joey "BootGuyJoe" Hanley
 * DATE WRITTEN: 1/31/2014
 */

#include <stdio.h> /* preprocessor directive to include 'stdio.h', the default C input/output library. */

main() /* main function that must exist in every C program */
{
    int height = 8, length = 12, width = 10, volume, weight;
    
    volume = height * length * width;
    wieght = (volume + 165) / 166; /* 166 pounds is the allowable number of cubic meters per pound. 165 added to volume to make sure the final result is rounded up. */
    
    printf("Dimensions: %dx%dx%d\n", length, width, height); /* Prints: "Dimensions: 8x12x10" */
    printf("Volume (cubic inches): %d\n", volume); /* The 'volume' variable wasn't actually necessary; 'printf' can print out expressions on its own. */ 
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}