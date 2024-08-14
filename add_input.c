#include <sys/types.h> //read
#include <sys/uio.h> //read
#include <unistd.h> //read
#include <stdlib.h> //malloc
void putstring(char* string);


char* readinput() { //finished: readinput func, same as echo_input. make sure to free in main
    char *input = malloc(64 * sizeof(char));
    ssize_t value = read(STDIN_FILENO, input, 63 * sizeof(char)); // 63 = 64-1, simplified because 64 != var
    input[value] = '\0';
    return(input);
}

int str_to_int(char* string) {
    int number = 0;
    int index = 0;
    while string[index] != '\0' {
        number = number * 10;
        //turn char into int
    }
}


int main() {
    putstring("Input first integer: ");
    char *first_input = readinput();
    int first_int = str_to_int(first_input);
    free(first_input);
    putstring("Input second integer: ");
    char *second_input = readinput();
    int second_int = str_to_int(second_input);
    free(second_input);
    //check if freeing happened too soon
}