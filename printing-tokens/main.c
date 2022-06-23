#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printing_tokens_1(char *s) {
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == ' ') {
      printf("\n");
    } else {
      printf("%c", s[i]);
    }
  }
  printf("\n");
}

void printing_tokens_2(char *s) {
  char *index = NULL;

  while ((index = strchr(s, ' ')) != NULL) {
    char *substr = malloc((index - s + 1) * sizeof(char));

    strncpy(substr, s, index - s);
    substr[index - s] = '\0';
    s = index + 1;

    printf("%s\n", substr);

    free(substr);
  }

  printf("%s\n", s);
}

int main() {
  char *str = "Parham Alvani 123 456";

  printing_tokens_1(str);
  printing_tokens_2(str);
}
