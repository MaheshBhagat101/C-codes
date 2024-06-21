// Write a C program that accepts three integers from the user and finds the second largest number among them.

#include<stdio.h>

int main ()
{
    int n1,n2,n3;
    printf("Enter any 3 positive integer ");
    scanf("%d %d %d", &n1,&n2,&n3);

    int secondLargest;

    if(n1>=n2 && n1>=n3)
    {
        secondLargest = (n2>=n3) ? n2 : n3;
    }
    else if(n2>=n1 && n2>n3)
    {
        secondLargest =(n1>=n3) ? n1 : n3;

    }
    else 
    {
        secondLargest = (n1>=n2) ? n1 : n2;

    }

    printf("The second larges number is : %d\n", secondLargest);

    return 0;
}