#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    FILE* inputFile = fopen("sample_text.txt", "r");

    int c;
    while ((c = fgetc(inputFile)) != EOF)
    {
        putchar(c);
    }

    fclose(inputFile);

    exit(0);
}


