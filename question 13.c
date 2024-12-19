#include <stdio.h>
#include <stdlib.h>

int main() {
    char file_path[100];
    FILE *file;
    char ch;
    int lines = 0, words = 0, characters = 0;
    int in_word = 0;

    printf("Enter the file path: ");
    scanf("%s", file_path);

    file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }


        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    fclose(file);


    printf("Lines: %d\n", lines + 1);

    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);

    return 0;
}
