#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* task2(const char* input) {
    const size_t size = strlen(input);
    char* output = malloc(size * 5 + 1);
    if (!output) return NULL;
    output[0] = '\0'; // initializes the output array

    for (size_t i = 0; i < size; i++) {
        switch (input[i]) {
            case '&': strcat(output, "&amp;"); break;
            case '<': strcat(output, "&lt;"); break;
            case '>': strcat(output, "&gt;"); break;
            default: {
                const char tmp[2] = { input[i], '\0' }; // creates a temp char array so that strcat works properly
                strcat(output, tmp);
            } break;
        }
    }
    return output;
}

int main() {
    char* output = task2("Hello & <World>!");
    if (output) {
        printf("%s\n", output);
        free(output);
    }
    return 0;
}

