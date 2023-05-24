#include <stdio.h>

int main() {
    char input;
    scanf("%c", &input);
    int connected = 0;
    if(input=='y')
        connected = 1;

    if (!connected) {
        printf("Error not connected to the internet try again\n");
        // close the program
        return -1;
    }

    // app logic
    char username[100], password[100];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    // verification logic

    // added auto
    return 0;
}

    