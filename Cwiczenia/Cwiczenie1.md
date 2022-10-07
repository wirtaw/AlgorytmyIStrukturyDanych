# Zadanie 1
napisac program ktora pyta ilsosc dni w miasacu i dzisieszy dzien. Wyprowadza ile zostalo dni do konca miesiaca.

```
zostalo(il_dni, dzien){
  zost = il_dni - dzien
  return zost
}  
```


# Zadanie 2
napisac program ktory obliza jakegu roku urodzenia i jaki teraz jest rok. Wyporwadza ile lat uzytkowniku.

```
ile_lat(r_uro, r_ter){
  lat = r_ter - r_uro
  return lat
}
```


# Zadanie 3
dana calkowita liczba k (1 <= k <= 180) i ciag lizcb 10111213..9899, do ktorego sa zapisane wszytkie dwoznakowe liczby. 
Wyznaczyc numer pary liczb, to ktorej wpada liczba k

(Jezeli ciag zaczynamy od liczby 1)
```
numer_pary(k, ciag){
  numer = 0
  if(k%2==1){
    numer = ciag[k] * 10
    numer = (ciag[k + 1]) + numer
  }
  if(k%2==0){
    numer = ciag[k]
    numer = (ciag[k - 1] * 10) + numer
  }  
  return numer
}
```

# Zadanie 4
liczba naturalna z n cyfr jst liczba Armstronga, jezelu suma jego liczb w pierwaztku n, jest rowna samej liczbie. 
Naprzyklad, 153 = 1^3 + 5^3 + 3^3. Napisac program otrzymania wszykich liczb Armstronga, z 3 i 4 liczb.

```
arms(){
  arms[]
  j = 0
  i = 100
  while(i < 1000){
    x = i % 10
    y = (i / 10) % 10
    z = (i / 100) % 10
    
    if(i==((x*x*x)+(y*y*y)+(z*z*z))){
      arms[j] = i
      j++
      }
    i++
    }
    
  while(i < 10000){
    v = i % 10
    x = (i / 10) % 10
    y = (i / 100) % 10
    z = (i / 1000) % 10
    
    if(i==((v*v*v*v)(x*x*x*x)+(y*y*y*y)+(z*z*z*z))){
      arms[j] = i
      j++
      }
    i++
    }
    
    return arms[]
}
```


# Zadanie 5
podaj pseudokod klas listy jedno- i dwukierunkowej

```
```
