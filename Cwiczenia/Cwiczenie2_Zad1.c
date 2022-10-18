/*
Sebastian Pavlovič
* -----------------
Cwiczenie
 Factorial
* -----------------
2022-10-18
*/

#include <stdio.h>
#include <stdlib.h>

silnia(liczba){
  int i = 1, suma = 1;

  while(i<=liczba){
    suma = suma * i;
    i++;
  }
  return suma;
}

void main(void){
  int liczba;

  printf("Podaj liczba: ");
  scanf("%d", &liczba);

  int sil = silnia(liczba);

  printf("%d", sil);
}

