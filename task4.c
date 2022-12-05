#include <unistd.h>
#include <stdio.h>

//extern char **environ;

int main(int argc, char **argv, char **envp) {
    // list out all the environment variables
    int i;
    for (i=0; envp[i]!=NULL; i++) {
        printf("%d: %s\n", i, envp[i]);
    }

    return 0;
}
