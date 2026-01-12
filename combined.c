#include <stdio.h>
#include <string.h>

int main() {
    // Program made by Om Mahendra Bute
    char text[500];
    long n;
    int choice;

    printf("Choose an option:\n");
    printf("1. Encrypt text\n");
    printf("2. Decrypt text\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // clear input buffer before fgets
    getchar();

    printf("Enter the word/sentence/paragraph:\n");
    fgets(text, sizeof(text), stdin);

    // remove newline character if present
    text[strcspn(text, "\n")] = '\0';

    n = strlen(text);

    if (choice == 1) {
        printf("Encrypted output:\n");
        for (int i = 0; i < n; i++) {
            printf("%c", text[i] + 9);   // encryption: shift +9
        }
    } else if (choice == 2) {
        printf("Decrypted output:\n");
        for (int i = 0; i < n; i++) {
            printf("%c", text[i] - 9);   // decryption: shift -9
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
