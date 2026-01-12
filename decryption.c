#include <stdio.h>
#include <string.h>

int main() {
    // Decryption code made by Om Bute
    char words[500];   // allow longer input
    long n; 

    printf("Enter the encrypted text:\n");
    fgets(words, sizeof(words), stdin);   // read full line including spaces

    // remove newline character if present
    words[strcspn(words, "\n")] = '\0';

    n = strlen(words);

    printf("The decrypted text is:\n");
    for (int i = 0; i < n; i++) {
        // decrypt by shifting each character back by -9
        printf("%c", words[i] - 9);
    }

    return 0;
}