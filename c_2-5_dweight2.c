/*
 * NAME: dweight2.c
 * PURPOSE: Computes the dimensional weight of a box from input provided by the user.
 * AUTHOR: Joey "BootGuyJoe" Hanley
 * DATE WRITTEN: 1/31/2014
 */

#include <stdio.h> /* preprocessor directive to include 'stdio.h', the default C input/output library. */

main() /* main function that must exist in every C program */
{
    int height, length, width, volume, weight;
    
    printf("Enter height of box: ");
    scanf("%d", &height); /* 'scanf' grabs input from the user, in this case an integer, and stores it in the int-type variable 'height'. */
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width; /* We're doing these calculations now, because we needed to wait until the user inputed their values first. */
    weight = (volume + 165) / 166;
    
    printf("Volume (cubic inches): %d\n", volume); /* Now take the data we got from the user, and print it. */
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}