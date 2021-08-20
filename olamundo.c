#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char argumento[30];

    strcpy(argumento, argc > 2 ? argv[1] : "Mundo");
    printf("Ola, %s!", argumento);
    printf("Ola, %s!", argv[1]);
    return 0;
}