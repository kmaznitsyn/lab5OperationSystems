#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv, char **envp) {
   
   	printf("Enter name of environment variable to delete: ");
    char name[100];
    unsetenv(name);

    return 0;
}
