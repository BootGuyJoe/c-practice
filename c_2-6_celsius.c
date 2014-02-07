/*
* NAME: celsius.c
* PURPOSE: Converts a Fahrenheit temperature to Celsius
* AUTHOR: Joey "BootGuyJoe" Hanley
* DATE WRITTEN: 2/7/2014
*/

#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0) /* Defining it with decimals instead of (5/9) is important, because C truncates the result when two integers are divided. */

main()
{
    float fahrenheit, celsius;
    
    printf("Enter Fahrenheit temperature: ");
    scanf_s("%f", &fahrenheit);
    
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);
    
    /* Not actually important */
	printf("Type anything here and hit enter to exit program: ");
	scanf_s("%d, &width");
    
    return 0;
}