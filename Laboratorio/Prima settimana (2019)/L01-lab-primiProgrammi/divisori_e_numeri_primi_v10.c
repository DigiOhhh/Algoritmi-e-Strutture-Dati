/*
1.  Scrivete un programma che stampi la sequenza decrescente dei numeri divisori di n, dove n
è un numero inserito in input. Modificate il programma in modo che stampi anche il numero di divisori di n.
*/

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  printf("%d\t", n);

  for (int i = n / 2; i > 1; i--)
    if (n % i == 0)
      printf("%d\t", i);

  printf("1\n");

  return 0;
}
