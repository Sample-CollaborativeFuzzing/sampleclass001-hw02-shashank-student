// ***
// *** DO NOT modify this file
// ***


#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>



void add(int num1, int num2);

int main(int argc, char * * argv)
{
    // read inv put file
    if (argc != 2)
    {
        return EXIT_FAILURE;
    }

    char * filename = argv[1];
    FILE * fp = fopen(filename, "r");

    if (fp == NULL) {
        return EXIT_FAILURE;
    }

    int num1;
    int num2;

    fscanf("%d %d", fp, &num1, &num2);
    fclose(fp);

    add(num1, num2);

    return EXIT_SUCCESS;
}
