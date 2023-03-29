# PJSP-E1
Beleske i zadaci sa predavanja/vezbi za predmet Programski jezici i strukture podataka (smer - E1)

## Tipovi podataka

- char     | 1B | %c
- int      | 4B | %d
- float    | 4B | %f
- double   | 8B | %lf
- unsigned long long int | 8B | %u

## Komande za terminal

- man ascii - dobijes ascii tabelu u terminalu
- code - otvaranje VS koda
- man naziv_neke_funkcije - daje nam opis svake funkcije i sve sto nam treba
- ? - otvaranje g edita
- cd - odlazak u direktorijum
- cd - - povratak iz direktorijuma
- mkdir - kreiranje direktorijuma
- gcc - kompajliranje koda (ako koristis math.h na kraju napises -ls)
- touch - pravljenje praznog fajla
- pwd - ispisuje putanju od pocetka do trenutne lokacije
- ls - izlistava sve direktorijume u trenutnom direktorijumu
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

## Vezbe - beleske (stingovi)

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

## Dodatak 

- break omogucava da se izadje iz bloka koda
- continue omogucava da se preskoci na sledecu iteracju bloka koda (preskok)
- Stvaranje pokazivaca "int *pok1;", dodela vrednosti "pok1 = &neka_promenljiva"
- Da bi dodelio vrednost promenljivoj na ciju adresu pokazuje pok1 pises : "*pok1 = neki_broj;"
- za ispis pokazivaca koristi se %p
