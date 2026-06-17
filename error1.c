#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main() {
  FILE *f = fopen("nothing.txt", "r");

  if (f == NULL) {
    printf("Error:(flage) %s\n", strerror(errno));
    exit(EXIT_FAILURE);
  }

  fclose(f);
  return EXIT_SUCCESS;
}