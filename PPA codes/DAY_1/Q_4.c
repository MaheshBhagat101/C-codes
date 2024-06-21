// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
#include <stdio.h>
#include <stdbool.h>

bool nearHundred(int num) 
{
    return (abs (100 - num) <= 10 || abs(200 - num) <= 10);
}

int main() 
{
    int number;
    
   
    printf("Enter an integer: ");
    scanf("%d", &number);
    
  
    if (nearHundred(number)) 
    {
        printf("%d is within 10 of 100 or 200.\n", number);
    } else 
    {
        printf("%d is not within 10 of 100 or 200.\n", number);
    }
    
    return 0;
}