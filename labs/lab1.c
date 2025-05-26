#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  printf("Enter your text: ");
  // Initialize Buffer
  char *buff = NULL;
  size_t size = 0;

  // Retrieve user input
  getline(&buff, &size, stdin);

  printf("Tokens: \n");

  // Printing out tokens
  char *wordptr;
  char *token = strtok_r(buff, " ", &wordptr);
  while (token != NULL) {
    printf("%s \n", token);
    token = strtok_r(NULL, " ", &wordptr); // Clear token
  }

  free(buff);
  return 0;
}
