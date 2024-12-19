#include <stdio.h>
#include <string.h>


void compress_string(char* s, int index, int count, char* result) {

    if (s[index] == '\0') {
        return;
    }


    if (s[index] == s[index + 1]) {

        compress_string(s, index + 1, count + 1, result);
    } else {

        char count_str[10];
        sprintf(count_str, "%d", count);
        strcat(result, (char[]){s[index], '\0'});
        strcat(result, count_str);


        compress_string(s, index + 1, 1, result);
    }
}

int main() {
    char input_string[] = "aaabbc";
    char result[100] = "";

    compress_string(input_string, 0, 1, result);

    printf("Compressed string: %s\n", result);

    return 0;
}
