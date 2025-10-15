#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // lettura della stringa (max. 100 caratteri)
    char* str = malloc(101 * sizeof(char));
    printf("Stringa: ");
    int i = 0;
    while (i < 101) {
        char c = (char) getchar();
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c >= 'a' && c <= 'z') {
            str[i] = c;
            i++;
        }
        if (c == '\n') {
            str[i] = 0;
            str = (char*) realloc(str, i * sizeof(char));
            break;
        }
    }
    // elaborazione
    char *p1 = str;
    char *p2 = p1;
    while (*p2 != 0) {
        p2++;
    }
    p2--;
    while (p1 < p2) {
        if (*p1 == *p2) {
            p1++;
            p2--;
        }
        else {
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    // deallocazione
    free(str);
    str = NULL;
    return 0;
}
