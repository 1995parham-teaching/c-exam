#include <stdio.h>
#include <stdlib.h>

struct student {
    int grade;
    int id;
    char name[200];
};

int students_compare(const void *p1, const void *p2) {
  struct student *s1 = (struct student *) p1;
  struct student *s2 = (struct student *) p2;

  return s1->id - s2->id;
}

void students_sort(struct student *students,
    int students_len) {

  qsort(students, students_len, sizeof(struct student), students_compare);
}

int main() {
  struct student students[] = {
    { 20, 9231058, "Parham" },
    { 19, 9231025, "Hesam" },
  };

  int num = sizeof(students) / sizeof(struct student);

  for (int i = 0; i < num; i++) {
    printf("%d\n", students[i].id);
  }

  students_sort(students, num);

  for (int i = 0; i < num; i++) {
    printf("%d\n", students[i].id);
  }
}
