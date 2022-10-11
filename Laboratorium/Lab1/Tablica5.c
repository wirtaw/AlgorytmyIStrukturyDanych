/*
Sebastian Pavlovič
* -----------------
Laboratorium
Obliczenie sumy, ilosci i mnozenia elementow tablicy.
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main(void){
  srand(time(NULL));
  
  int n = 20;
  double x[n], sum = 0, mno = 1;

  for(int i = 0; i < n; i++){
    x[i] = (rand() % 9) + 1;
  } 

  for(int i = 0; i < n; i++){
    sum = sum + x[i];
    mno = mno * x[i];
  }

  printf("Suma = %lf \n",sum);
  printf("Mnozenie = %lf \n",mno);
}
