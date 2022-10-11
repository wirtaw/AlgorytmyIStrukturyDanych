/*
Sebastian Pavlovič
* -----------------
Laboratorium
 Obliczyc funkcja y = ax^2 znaczenia, gdy a ir x zmeniajan sie jednoczesnie: a z 1 krokiem 0.5, x - z 2 do 6 krokiem 2
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>

void main(void){
  double a = 1.0, x = 2.0;
  
  while(x<=6){
    printf("%.1lf = %.1lf * %.1lf ^ 2 \n",(a*x*x), a, x);
    
    x = x + 2.0;
    a = a + 0.5;
  }
}
