#include <stdio.h>
#include <string.h>

// 9 is key.. keep it safe.
int main() {
    // this code is purely made by Om Mahendra Bute
    char word[500];
    long n;

    printf("Enter the word/sentence/paragraph to be encrypted:\n");
    fgets(word, sizeof(word), stdin);   // reads full line including spaces

    // remove newline character if present
    word[strcspn(word, "\n")] = '\0';

    n = strlen(word);

    printf("Encrypted output:\n");
    for (int i = 0; i < n; i++) {
        // simple encryption: shift each character by +9
        printf("%c", word[i] + 9);
    }

    return 0;
}