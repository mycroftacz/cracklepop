/*
Code CracklePop
Write a program that prints out the numbers 1 to 100 (inclusive).
If the number is divisible by 3, print Crackle instead of the number. 
If it's divisible by 5, print Pop. 
If it's divisible by both 3 and 5, print CracklePop. 
*/ 

#include <stdio.h>

int main (void)
{
    int count; 
    for (count = 1; count < 101; count++)
    {
        if (count%15 == 0)
        {
            printf ("CracklePop \n");
        }
        else if (count%5 == 0)
        {
            printf ("Pop \n");
        }
        else if (count%3 == 0)
        {
            printf ("Crackle\n");
            continue;
        }
        else
        {
            printf ("%i \n", count);
        }
        
    }
    
    return 1; 
}