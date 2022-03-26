#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    char name[10001];
    char ch;
    scanf("%[^\n]", &name);
    getchar();
    for(int i = 0; i < strlen(name); i++){
        ch = name[i];
        name[i] = toupper(ch);
        if(name[i] == 'I'){
            name[i] = '1';
        } else if (name[i] == 'R'){
            name[i] = '2';
        } else if (name[i] == 'E'){
            name[i] = '3';
        } else if (name[i] == 'A'){
            name[i] = '4';
        } else if (name[i] == 'S'){
            name[i] = '5';
        } else if (name[i] == 'G'){
            name[i] = '6';
        } else if (name[i] == 'T'){
            name[i] = '7';
        } else if (name[i] == 'B'){
            name[i] = '8';
        } else if (name[i] == 'P'){
            name[i] = '9';
        } else if (name[i] == 'O'){
            name[i] = '0';
        } 
    }
    printf("%s\n", name);
    return 0;
}