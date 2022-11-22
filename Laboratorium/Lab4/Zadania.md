# Zadanie 1
Dana calkowita liczba n>=1. Napisz rekurencyjna funkcja takiej liczby z, ktora wypelnia taki warunek 2^(a-1) <= n < 2^a

```
Liczba( n, a) {
  if(pow(2, a-1) <= n && n < pow(2,a)){
    return a;
  }
  else
    return Liczba(n, a+1);
}
```


# Zadanie 2
Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu Fibonacciego

```
Fibo( n){
  if(n == 0)
    return 0
  else if(n == 1)
    return 1
  else
    return (Fibo(n-1) + Fibo(n-2))
}
```

# Zadanie 3
Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu arytmcznego

```
Aryt( pier,  krok,  n) {
  if (n > 1) {
    return Aryt(pier + krok, krok, n-1);
  } else {
    return pier;
  }
}
```

# Zadanie 4
Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego

```
Geom( pier,  drug,  n) {
  if (n > 1) {
    q = drug / pier
    return Geom(drug, drug * q, n - 1)
  } else {
    return pier
  }
}
```

# Zadanie 5
Napisz funkcję rekurencyjną do wyprowadzenia n-tej liczby trojkatu Paskalia

```
pascal( row, column) {
  if (column == 0)
    return 0
  else if (row == 1 && column == 1)
    return 1
  else if (column > row)
    return 0
  else
    return (pascal(row - 1, column - 1) + pascal(row - 1, column))
}
```
