//    # #
//   ## ##
//  ### ###
// #### ####


#include "cs50.h"
#include <stdio.h>

int main (void)
{
    //Get the height for user
    int height = get_int("Height: ");
    // check weather the height is valied or not
    if (height <= 0 || height > 50)
    {
        printf("Invalied Height! height should be between 0 and 50");
        return 1;
    }

    // create rows
    for (int i = 1; height >= i; i++)
    {
        //Create blank parts
        for (int j = height; j > i; j--)
        {
            printf(" ");

        }
        //create left rectrangle
        for (int k = 0; k < i; k++)
        {
            printf("#");

        }
        // middle gap
        printf(" ");
        // right rectrangle
        for (int k = 0; k < i; k++)
        {
            printf("#");
            
        }
        // printf("c");
        printf("\n");
    
    }
}