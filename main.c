#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // lettura della stringa (max. 100 caratteri)
    char* str = malloc(101 * sizeof(char));
    int i = 0;
    for (i = 0; i < 101; i++) {
        char c = (char) getchar();
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c >= 'a' && c <= 'z') {
            str[i] = c;
        }
        if (c == '\n') {
            str[i] = 0;
            str = (char*) realloc(str, i * sizeof(char));
            if (str == NULL) {
                printf("Out of memory\n");
                return 1;
            }
            break;
        }
    }
    // elaborazione
    // ...
    // deallocazione
    free(str);
    str = NULL;
    return 0;
}
