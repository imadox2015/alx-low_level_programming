#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 14

int main(void)
{
    char password[PASSWORD_LENGTH + 1];  // +1 for null terminator
    const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));  // Seed the random number generator

    // Generate random password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % 62];
    }
    password[i] = '\0';  // Add null terminator

    // Print password
    printf("%s", password);

    return 0;
}
