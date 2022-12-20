/*
Sebastian Pavlovič
2022-12-20
*/
#include <stdio.h>

#include "prior.c"
#include "swap.c"
#include "bubble.c"    // bubbleSort(array, size)
#include "insertion.c" //insertionSort( array, size)
#include "selection.c" // selectionSort(array, size)
// selection sort nie dziala calkowicie poprawnie nie wiem z jakiej przyczyny
#include "merge.c" // mergeSort(arr, 0, size - 1)

int main(void) {
  int tab[] = {5, 2, 5, 4, 8, 7, 5, 6, 9, 5, 2, 1, 4, 6, 5, 4, 8, 5, 3, 6, 9, 8, 7, 1, 8, 4, 0, 9, 8, 7, 4, 9, 8, 7, 4, 2, 3, 6, 4, 8, 7, 5, 6, 7, 2, 1, 5, 8, 1};
  int ile = sizeof(tab) / sizeof(tab[0]);
  int i;
  
  for (i = 0; i < ile; i++) {
    printf("%d", tab[i]);
  }
  mergeSort(tab, 0, ile);
  printf("\n");
  for (i = 0; i < ile; i++) {
    printf("%d", tab[i]);
  }
}
