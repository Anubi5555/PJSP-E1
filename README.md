# PJSP-E1
Beleske i zadaci sa predavanja/vezbi za predmet Programski jezici i strukture podataka sa smera E1

## Tipovi podataka

- char     | 1B
- int      | 4B
- float    | 4B
- double   | 8B
- unsigned long long int | 8Bs

## Komande za terminal

- man ascii - dobijes ascii tabelu u terminalu
- man naziv_neke_funkcije - daje nam opis svake funkcije i sve sto nam treba
-  - otvaranje VS code-a
-  - otvaranje g edita
- cd - odlazak u direktorijum
-  - povratak iz direktorijuma
- mkdir - kreiranje direktorijuma
- gcc - kompajliranje koda
- touch - pravljenje praznog fajla
- pwd - izlistava putanju od pocetka do tamo gde si 
- ls - izlistava sve direktorijume tamo gde se nalazis 
- clear - brises istoriju terminala
- ./a.out - da se pokrene

## Funkcije matematike <math.h>

- sqrt - koren
- pow (a,n) - daje ti a na n
- rand - daje ti slucajan broj
- abs - apsolutna vrednost

## Funkcije za stringove <string.h>

- strlen - duzina stringa
- strcat - spajanje
- strspy - kopiranje
- strstr - pokazivac na prvu pojavu stringa u drugom stringu
- strcmp - poredi dva stringa
- gets - upis stringa
- puts - ispis stringa


## Vezbe - beleske

- karakter ide izmedju ' ' a string " ", na kraju svakog stringa je \0
- scanf nam unosi do prvog razmaka ali gets funkcija nema ogranjicenje sto otvara mnoge probleme 
- fpurge koristimo da bi mogli da kucamo entere u stringovima 
- fgets je filegets (promenljiva u koju smestam, velicina, odakle nesto ucitavam)
- stdin je tastatura
- ako sa scanf unesemo “primer nekog stringa” dobicemo smao “primer” a ako to isto odradimo sa puts 
- Ako nam se zadatak ne kompajlira, ne priznaju nam nista
- Kada pravis string karakter po  karakter uvek dodaj ‘\0’ da bi mogao da koristis funkcije za stringove
- Kad spajamo ili kopiramo string, sve ide u prvi, kopiranje gazi preko svega sto je u stringu bilo 

## Petlje

- for (int i=0;i<n;i++>) - (pocetak; kraj; skok)
- while - radi nesto dok je uslov zadovoljen
- do while - uradi nesto pa proveri uslov