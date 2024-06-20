//Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2.
#include <stdio.h>
#include <string.h>
void reverseSubstring(char str[], int n1, int n2)
{
    if(n1<0 || n2>=strlen(str) || n1>=n2)
    {
        printf("Invalid range!\n");
        return;
    }


 while (n1<n2)
    {
        char temp = str[n1];
        str[n1] = str[n2];
        str[n2] = temp;
        n1++;
        n2--;
    }
}

int main()
{
    char str[100];
    int n1,n2;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter n1 and n2 (0-based indexing): ");
    scanf("%d %d", &n1, &n2);

    reverseSubstring(str, n1,n2);

    printf("Modified string: %s\n", str);

    return 0;
}