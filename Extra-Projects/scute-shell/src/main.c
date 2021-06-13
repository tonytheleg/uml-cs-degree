#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
#include <unistd.h>
#include <sys/wait.h>

char **get_input(char *input);

int main(void) 
{
    char **command;
    char *input;
    pid_t child_pid;
    int stat_loc;

    while (1) {
        // read what is passed to shell and parse it to separate
        // commands and args
        input = readline("scutesh> ");
        command = get_input(input);

        // fork and execute the command by changing the child
        // process to be the executed command
        child_pid = fork();
        if (child_pid == 0) {
            execvp(command[0], command);
            printf("This wont be printed if execvp is successful\n");
        } else {
            waitpid(child_pid, &stat_loc, WUNTRACED);
        }

        // free up input and command memory allocation
        free(input);
        free(command);
    }
}

// get_input returns a pointer to a pointer, taking the 
// command passed to the shell by user
char **get_input(char *input) {
    char **command = malloc(8 * sizeof(char *));
    char *separator = " ";
    char *parsed;
    int index = 0;

    // splits the command and args into an array until
    // it hits a null operator
    parsed = strtok(input, separator);
    while (parsed != NULL) {
        command[index] = parsed;
        index++;

        parsed = strtok(NULL, separator);
    }

    command[index] = NULL;
    return command;
}