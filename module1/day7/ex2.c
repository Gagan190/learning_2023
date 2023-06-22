#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

void changeToUpperCase(char *str)
{
    while (*str)
    {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void changeToLowerCase(char *str)
{
    while (*str)
    {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void changeToSentenceCase(char *str)
{
    int len = strlen(str);
    if (len > 0)
    {
        *str = toupper((unsigned char)*str);
        for (int i = 1; i < len; i++)
        {
            if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
                str[i] = toupper((unsigned char)str[i]);
            else
                str[i] = tolower((unsigned char)str[i]);
        }
    }
}

int main(int argc, char *argv[])
{
    FILE *sourceFile, *destinationFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    if (argc < 4)
    {
        printf("Insufficient arguments. Usage: ./cp <option> <source> <destination>\n");
        return 1;
    }

    // Open the source file for reading
    sourceFile = fopen(argv[2], "r");
    if (sourceFile == NULL)
    {
        printf("Failed to open the source file.\n");
        return 1;
    }

    // Open the destination file for writing
    destinationFile = fopen(argv[3], "w");
    if (destinationFile == NULL)
    {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read the source file and handle the text case
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0)
    {
        if (strcmp(argv[1], "-u") == 0)
            changeToUpperCase(buffer);
        else if (strcmp(argv[1], "-l") == 0)
            changeToLowerCase(buffer);
        else if (strcmp(argv[1], "-s") == 0)
            changeToSentenceCase(buffer);

        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
