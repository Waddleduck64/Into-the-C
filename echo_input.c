#include <sys/types.h> //read
#include <sys/uio.h> //read
#include <unistd.h> //read
#include <stdlib.h> //malloc
void putstring(char* string);


char* readinput() {
    char *input = malloc(64 * sizeof(char));
    ssize_t value = read(STDIN_FILENO, input, 63 * sizeof(char)); // 63 = 64-1, simplified because 64 != var
    input[value] = '\0';
    return(input);
}


int main() {
    putstring("Input: ");
    char *input = readinput();
    putstring(input);
    free(input);
}