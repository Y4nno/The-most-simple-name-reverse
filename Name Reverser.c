#include <stdio.h>
#include <string.h>

void Naming(char* name);

int main(){

    char name[50];

    printf("Pls enter a name to reverse: ");
    scanf("%s", name);

    Naming(name);

    return 0;
}

void Naming(char* name){

    int size = strlen(name);

    for(int i = 0;  i <= size; i++){
        printf("%c ", name[size - i]);
    }
}
