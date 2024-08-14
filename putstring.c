#include <unistd.h>

void putstring(char* string) {
    unsigned int counter = 0;
    while (*(string + counter) != '\0') {
        counter++;
    }
    write(STDOUT_FILENO, string, counter);
}