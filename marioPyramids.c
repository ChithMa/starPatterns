//    # #
//   ## ##
//  ### ###
// #### ####


#include "cs50.h"
#include <stdio.h>

int main (void)
{
    int height = get_int("Height: ");
    if (height <= 0 || height > 50)
    {
        printf("Invalied Height! height should be between 0 and 50");
        return 1;
    }

    for (int i = 1; height >= i; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf(" ");
            
            
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");

        }
        printf(" ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
            
        }
        // printf("c");
        printf("\n");
    
    }
}