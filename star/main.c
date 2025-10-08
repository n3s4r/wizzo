#include <stdio.h>
#include <stdlib.h>

int main()
{
    displayTriangle(25);
    //printf("\n");
    displayInvertedTriangle(25);
    return 0;
}

void displayTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void displayInvertedTriangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
