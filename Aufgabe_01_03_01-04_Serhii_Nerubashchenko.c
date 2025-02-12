//Aufgabe 01_03_01-04  29.01.2025

//01_03_01
#include<stdio.h>

 int main(){

    double breiteRechteck;
    double hoeheRechteck;
    double flaecheRechteck;

    printf("Geben Sie bitte die Breite de Rechteckes ein :\n");
    scanf("%lf",&breiteRechteck);
   
    printf("Geben Sie bitte die Höhe de Rechteckes ein :\n");
    scanf("%lf",&hoeheRechteck);
   
    flaecheRechteck = breiteRechteck * hoeheRechteck;

    printf("Die Fläche des Rechteckes beträgt: %.2lf",flaecheRechteck);  //%.2lf  .2 ist 2 Zahl nach Komma
    

    return 0;

}

//01_03_02

#include<stdio.h>

int main(){

    int a = 1;
    char zeichen1 ;
    char zeichen2 ;
    char zeichen3 ;


    printf("Geben Sie bitte das %d Zeichen ein: ", a);
    scanf(" %c",&zeichen1);
    a++;
    
    printf("Geben Sie bitte das %d Zeichen ein: ", a);
    scanf(" %c",&zeichen2);
    a++;
    
    
    printf("Geben Sie bitte das %d Zeichen ein: ", a);
    scanf(" %c",&zeichen3);
    

    printf("Eingegebene Zeichen: \n");
    printf(" %c\n", zeichen1);
    printf(" %c\n", zeichen2);
    printf(" %c\n", zeichen3);


    return 0;
}

//01_03_03

#include<stdio.h>

int main(){

    int tag;
    int monat;
    int jahr;


    printf("Geben Sie die Tag ein ");
    scanf(" %d", &tag);
    printf("Geben Sie die Monat ein ");
    scanf(" %d", &monat);
    printf("Geben Sie die Jahr ein ");
    scanf(" %d", &jahr);


    printf(" Deutsche Datum :........ %.2d.%.2d.%.4d  \n",tag, monat, jahr);
    printf(" USA Datum :........ %.4d-%.2d-%.2d ",jahr, monat, tag);



    return 0 ;
}

//01_03_04

#include<stdio.h>


int main(){

    double grundGrbuer;
    double km;
    double preisProKm;
    double gesamteFahrtPreis;

    printf("Geben Sie die GrundGebühr ein: ");
    scanf(" %lf", &grundGrbuer);
    printf("Geben Sie die Anzahl der gefahrenen KM ein: ");
    scanf(" %lf", &km);
    printf("Geben Sie den Preis pro KM ein: ");
    scanf(" %lf", &preisProKm);

    gesamteFahrtPreis = grundGrbuer + (km*preisProKm);
    printf("Bei einer Grundgebühr von %.2lf Euro und einem Kelometerpreis von %.2lf Euro, kostet eine %.2lf km lange Taxifahrt insgesamt %.2lf Euro", grundGrbuer, km, preisProKm,gesamteFahrtPreis);


    return 0 ;
}