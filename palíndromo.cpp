//
// Created by usuario on 09/01/2025.

#include <stdio.h>
#include <string.h>

//Prototipos de funciones
int isPalindrome(char *word);
void getInput(char *word);


int main(){
  char word[22];
  getInput(word);
  return 0;
}

int isPalindrome(char *word) {
  int i;
  int longitud=strlen(word);
  for (i=0; i<longitud/2; i++) {
    if (word[i] != word[longitud-i-1]) {
      return 0;
    }
  }
  return 1;
}

void getInput(char *word) {
  word[22];
  printf("Por favor ingresa una palabra");
  scanf("%s", word);
  if (isPalindrome(word)) {
    printf("La palabra es un palindromo");
  } else {
    printf("La palabra no es un palindromo");
  }
}
