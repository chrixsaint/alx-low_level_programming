#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(char *array[], int n)
{
    srand(time(0));
    for(int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        swap(&array[i], &array[j]);
    }
}

int main()
{
    // Initialize the names
    char* names[] = {"Franklin", "Godwyn", "Isaac","Christian"};
    int totalNames = sizeof(names) / sizeof(names[0]);

    // Shuffle the names
    shuffle(names, totalNames);

    // Print the pair
    printf("The pair is: %s and %s\n", names[0], names[1]);

    return 0;
}