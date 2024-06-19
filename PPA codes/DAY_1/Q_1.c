//Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of positive integers: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid Input.Please enter a positive integer.\n");
        return 1;
    }

    int minAppearances = n+1;
    int minNumbers;
    int count[n];
    int numbers[n];

    printf("Enter %d positive integers: \n",n);
    for(int i=0; i<n;i++)
    {
        scanf("%d", &numbers[i]);
        count[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        int currentCount = 1;
        if(count[i] == -1)
        continue;

        for (int j = i+1; j<n; j++)
        {
            if(numbers[i] == numbers[j])
            {
                currentCount++;
                count[j] = -1;
            }
        }
        count[i] = currentCount;
        if(currentCount < minAppearances || (currentCount == minAppearances && numbers[i] < minAppearances))
        {
            minAppearances = currentCount;
            minNumbers = numbers[i];
        }

    }
    printf("The integer that appears the lest number of times is : %d\n", minNumbers);
    return 0;


}