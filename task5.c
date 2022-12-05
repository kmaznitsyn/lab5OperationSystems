#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//extern char **environ;

int main(int argc, char **argv, char **envp) {
    // list out all the environment variables
    printf("Enter name of environment variable: ");
    char string[100];
    char envName[100];
    scanf("%s", &string);
    char* result;
    result = getenv(string);
    printf("%s", result);
    
   

    return 0;
}
