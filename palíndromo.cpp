//
// Created by usuario on 09/01/2025.
#include <stdio.h>
#include <string.h>

//Prototipos de funciones 
int isPalindrome(char *word);
void getInput(char *word);

int main() {
    char word[22];
    int result;
    
    getInput(word);
    result = isPalindrome(word);
    
    if (result) {
        printf("La palabra es un palindromo\n");
    } else {
        printf("La palabra no es un palindromo\n");
    }
    
    return 0;
}

int isPalindrome(char *word) {
    int i;
    int longitud = strlen(word);
    for (i = 0; i < longitud/2; i++) {
        if (word[i] != word[longitud-i-1]) {
            return 0;
        }
    }
    return 1;
}

void getInput(char *word) {
    printf("Por favor ingresa una palabra: ");
    scanf("%s", word);
}
