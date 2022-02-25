#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x,s,h,x1,h1,height;
    do{
        height = get_int("enter number between 1 and 8\n");
    }
    while(height<=0 || height>=8);


    for (x=1; x<= height; x++) //(x) printing row-lines
    {
        //first pyramid
        for (s=x; s<=(height-1); s++) //(s) printing spaces
        {
            printf(" ");
        }
        for (h=1; h<=x; h++) //(h) printing hashes
        {
            printf("#");
        }

        printf("  "); //gap between two pyramids

        //second pyramid
        for (x1=1; x1<=x; x1++) //(x1) printing row-lines
        {
            for (h1=x1; h1<=x1; h1++) //(h1) printing hashes
            {
                printf("#");
            }
        }

        printf("\n"); //new lines
    }
    return 0;
}
