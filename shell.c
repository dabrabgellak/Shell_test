#include <stdio.h>
#include <stdlib.h>

char *read_line() {

    char *c = NULL;
    size_t bufsize = 32;
    size_t size;

    c = (char *) malloc(bufsize * sizeof(char));
    if (c == NULL) {
        perror("Unable to allocate buffer");
        exit(1);
    }


    getline(&c, &size, stdin);

    printf("%s", c);

    free(c);
    return 0;


}

void make_loop(void) {
    char *line;
    char **args;
    int status = 1;

    do {
        printf("Simple_shell> ");
        line = read_line();

    } while (status);
}

int main(int argc, char **argv) {
    make_loop();


    return EXIT_SUCCESS;
}
