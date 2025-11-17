#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256]; 
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("No input.\n");
        return 1;
    }


    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len -= 1;
    }

    printf("You entered: \"%s\"\n", str);
    printf("Length: %zu\n", len);

    return 0;
}
