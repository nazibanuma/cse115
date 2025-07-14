#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool search_character(const char *str, char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[1000], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    printf("Enter a character to search: ");
    scanf(" %c", &ch);
    
    if (search_character(str, ch)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}

