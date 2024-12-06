#include <stdio.h>

typedef struct student {
  int sc;
  int gr;
  int tu;
} stu;

int main() {
  int q;
  scanf("%d", &q);
  stu a[q];
  int n[q];

  for (int y = 0; y < q; y++) {
    scanf("%d", &a[y].sc);
    a[y].gr = y + 1;
    a[y].tu = y + 1;
    n[y] = a[y].sc;
  }
  int temp;

  for (int i = 0; i < q; i++) {
    for (int j = 0; j < q - 1; j++) {
      if (a[j].sc < a[j + 1].sc) {
        temp = a[j].sc;
        a[j].sc = a[j + 1].sc;
        a[j + 1].sc = temp;

        temp = a[j].gr;
        a[j].gr = a[j + 1].gr;
        a[j + 1].gr = temp;
      }
    }
  }

  for (int ii = 0; ii < q-1; ii++) {
    if (a[ii].sc == a[ii + 1].sc) {
      printf("grade change: %d, %d, %d | %d -> %d\n", ii + 1, a[ii].sc,
             a[ii + 1].sc, a[ii + 1].gr, a[ii].gr);
      a[ii + 1].gr = a[ii].gr;
    }
  }

  printf("\n");
  for (int t = 0; t < q; t++) {
    printf("%d %d\n", n[t], a[t].gr);
  }
}