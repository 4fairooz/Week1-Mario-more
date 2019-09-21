#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        // promtpt user of the height 
        n = get_int("enter the pyramids  heights:");// input given by user
    }
    
    while (n <= 0 || n > 8);// specified the input be positive and less than 8

    
    for (int i = 0; i < n; i++)
    {

        //Identify the rows and columns
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)// the pattern

            {

                printf(" ");
            }

            else
            {

                printf("#");
            }

        }

       
        printf("\n");
    }
}
