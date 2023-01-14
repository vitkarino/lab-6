#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{

    double a, b, delta;
    int N;
    char group_name[40] = {0};
    char student_name[40] = {0};

    FILE *input = fopen("input.txt", "r");

    if (input == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    else
    {
        fscanf(input, "%lf %lf %d %lf %s %s", &a, &b, &N, &delta, group_name, student_name);
    }

    writeOutput(a, N, delta, group_name, student_name);
    writeBinary(group_name, student_name);

    printf("\nProgram finished successfully!\n\n");

    return 0;
}

