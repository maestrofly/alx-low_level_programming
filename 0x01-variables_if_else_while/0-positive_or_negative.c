/*
**File: 0-positive_or_negative.c
**Auth: Derrick
*/

#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**                                                                                                  **main - Prints a random number and states whether
**it is negative or zero or positive.         
**return: must be always 0.                                                                          */ 

int main(void)
  
{
    int n;
    
    srand(time(0));
    
    n = rand() - RAND_MAX / 2;
    
    if (n > 0)
      
            printf("%d is positive\n", n);
    
    else if (n < 0)
      
            printf("%d is negative\n", n);
    
    else
      
            printf("%d is zero\n", n);
    
    return (0);

}

