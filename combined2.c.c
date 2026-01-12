#include <stdio.h>
#include <string.h>
//this program is made by om mahendra bute.
// simple Caesar cipher with key = 9
void encrypt(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = text[i] + key;
    }
}

void decrypt(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = text[i] - key;
    }
}

int main() {
    char text[500];
    int choice;
    int key = 9;  // keep your key safe

    printf("Choose an option:\n");
    printf("1. Encrypt text\n");
    printf("2. Decrypt text\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    getchar(); // clear newline left by scanf

    printf("Enter the word/sentence/paragraph:\n");
    fgets(text, sizeof(text), stdin);

    // remove newline if present
    text[strcspn(text, "\n")] = '\0';

    if (choice == 1) {
        encrypt(text, key);
        printf("Encrypted output:\n%s\n", text);
    } else if (choice == 2) {
        decrypt(text, key);
        printf("Decrypted output:\n%s\n", text);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}