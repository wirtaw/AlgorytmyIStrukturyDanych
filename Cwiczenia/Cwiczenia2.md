## Pseudokod i udowodnienie ze jest częściowo poprawny
# Zadanie 1
Factorial

```
silnia(liczba){
  i = 1
  suma = 1

  while(i<=liczba){
    suma = suma * i
    i++
  }
  return suma
}
```


# Zadanie 2
Iloczyn i reszta

```
IloIRes(liczba, dzielnik){
  
  iloczyn = liczba * dzielnik
  reszta = liczba % dzielnik
  
  lista[]={iloczyn,reszta}
  
  return lista
}
```


# Zadanie 3
NWD

```
NWD(lic1, lic2){
  
  while(lic1 != lic2){
    if(lic1 > b){
      lic1 -= lic2
    }
    else{
      lic2 -= lic1
    }
  }
  return lic1
}
```

# Zadanie 4
Srednia

```
srednia(tabela, ilosc){
  sred = 0
  
  for(i = 0; i < ilosc; i++){
    sred += tabela[i]
  }
  
  sred = sred / ilosc

  return sred
}
```


# Zadanie 5
Min albo Maks

```
MinMax(tabela, ilosc){
  min = tabela[0]
  max = tabela[0]
  
  for(i = 0; i < ilosc; i++){
    if(min > tabela[i]){
      min = tabela[i]
    }
    if(max < tabela[i]){
      max = tabela[i]
    }
  }
  
  minmax[]={min,max}
  
  return minmax
}
```
