#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_period(char *f1, char *f2) {
  FILE *fp1 = fopen(f1, "r");
  if (fp1 == NULL) {
    return;
  }

  FILE *fp2 = fopen(f2, "w");
  if (fp2 == NULL) {
    return;
  }

  char *buff = NULL;
  size_t size = 0;

  while (getline(&buff, &size, fp1) >= 0) {
    buff[strlen(buff) - 1] = '\0';

    fprintf(fp2, "%s.\n", buff);

    free(buff);
    size = 0;
    buff = NULL;
  }

  fclose(fp1);
  fclose(fp2);
}

int main() {
  add_period("hello.txt", "bye.txt");
}
