#include <stdio.h>
#include <string.h>

int main() {

    char correct_username[] = "user123";
    char correct_password[] = "hello";
    char username[20];
    char password[20];

    int maxattempts = 3;

    printf("Enter your details\n");

    for (int attempt = 1; attempt <= maxattempts; attempt++) {

        printf("Enter your username: ");
        scanf("%s", username);

        printf("Enter your password: ");
        scanf("%s", password);


        if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
            printf("Login successful! Welcome!\n");
            return 0;
        } else {
            int remainingattempts = maxattempts - attempt;
            printf("Incorrect username or password. You have %d attempts left.\n", remaining_attempts);

            if (remainingattempts == 0)
                 printf("Too many failed attempts. Access denied.\n");
               break;
            }
        }


    return 0;
}
