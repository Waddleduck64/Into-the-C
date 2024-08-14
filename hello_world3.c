void putstring(char* string);

// void putstring(char* string) {
//     unsigned int counter = 0;
//     while (*(string + counter) != '\0') {
//         counter++;
//     }
//     write(STDOUT_FILENO, string, counter);
// }

int main() {
    // write(STDOUT_FILENO, "Hello World!\n", 13);
    // char* hello_world = "Hello World!";
    // char H = *hello_world;
    // char e = *(hello_world + 1);
    // char l = hello_world[2]; // a[b] == *(a + b)
    // write(STDOUT_FILENO, hello_world, 12);
    putstring("Hello World!\n");
    // return(69);
}