#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, Count = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }

        if ((str[i] != ' ' && str[i] != '\n') && (i == 0 || str[i - 1] == ' ')) {
            Count++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of words: %d\n",Count);

    return 0;
}
