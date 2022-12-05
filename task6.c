
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//extern char **environ;
//COMPUTERNAME=
//DESKTOP-5K3LUKB

int setenv(const char *name, const char *value, int overwrite)
{
    int errcode = 0;
    if(!overwrite) {
        size_t envsize = 0;
        errcode = getenv_s(&envsize, NULL, 0, name);
        if(errcode || envsize) return errcode;
    }
    return _putenv_s(name, value);
}

int main(int argc, char **argv, char **envp) {
    // list out all the environment variables
    printf("Enter name of environment variable: ");
    char name[100];
    scanf("%s", &name);
    printf("%s - name\n", name);
    printf("Enter value of environment variable: ");
    char value[100];
    scanf("%s", &value);
    printf("%s - value\n", value);
    
    printf("Setting new value for environment variable\n");
    setenv(name, value, 1);
    
    char* result;
    result = getenv(name);
    printf("%s - new value\n", result);

    
    
    
    
   

    return 0;
}
