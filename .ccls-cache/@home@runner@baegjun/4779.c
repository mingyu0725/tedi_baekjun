// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void sol(int a, char *zo, int n, int x) {

//   if (a < 1) {
//     for (int q = 0; q < n; q++) {
//       printf("%c", zo[q]);
//     }
//     return;
//   }

//   int p = 0;
//   for (int i = 0; i < x; i++) {
//     while (zo[p] == ' ') {
//       p++;
//     }
//     for (int j = p + a; j < p + a + a; j++) {
//       zo[j] = ' ';
//     }
//     p += a;
//   }
//   sol(a / 3, zo, n, x * 2);
// }

// int main() {
//   int n;
//   char *zo = (char *)malloc(sizeof(char) * 531441);
  
//   while (scanf("%d", &n) != EOF) {
//     int a = 1;
//     for (int s = 0; s < n; s++) {
//       a *= 3;
//     }
//     memset(zo,0, a);
//     n = a;

//     for (int p = 0; p < a; p++) {
//       zo[p] = '-';
//     }
//     int x = 1;
//     sol(a / 3, zo, n, x * 2);
//     printf("\n");
//   }
  
//   free(zo);
//   return 0;
// }