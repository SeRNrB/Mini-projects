//Abgabename: 25_02_07HW05-Schell.Martin
//Aufgabe_02_05_04+05.v02
//Autor: M.Schell
//Helfer: Chat-GPT
//Datum: 10.02.25
//Programm: Lotto-Simulation 6 aus 49 //v02- Funktionen

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mynumbers(int* meintipp, char* eigeneZahlen){
    printf("\nWollen sie mit Ihren eigenen Zahlen spielen? (j/n)\t");
        
        scanf(" %c", eigeneZahlen);
        
        if(*eigeneZahlen == 'j'){        
            for(int a=0; a<6;a++){                 
                int Eingabe;
                int istEinzigartig;
                do{
                    printf("Geben Sie Ihre %d von 6 Lottozahlen zwischen 1 und 49 ein: ",a+1);
                    scanf("%d", &Eingabe);

                    if (Eingabe < 1 || Eingabe >49)   {
                        istEinzigartig=0;
                        printf("\nDiese Zahl ist nicht zwischen 1 und 49!\n");
                        continue;   //continue -> sorgt dafür das bei falscher Eingabe die Schleife fortgesetzt wird  und außerdem das der Bereich eingehalten wird
                    }
                    istEinzigartig=1;
                    for (int j = 0; j < a; j++)  {
                        if(meintipp[j] == Eingabe){
                            printf("\nDiese Zahl hast du schon!\n");
                            istEinzigartig=0;
                            break;
                        }
                    }   
                }while (!istEinzigartig);
                meintipp[a]= Eingabe;            
            }
        }
}
void anzahlZiehungen(int* ziehungen){
    printf("\nWieviele Lottoziehungen wollen sie spielen? ");
    scanf(" %d", ziehungen);
}
void rndlotto(int* meintipp, int ziehungen, int* lottozahlen, int* richtigeTreffer){
    for (int i = 0; i < ziehungen; i++)  {
        for(int l=0;l<6;l++){                   //generiert 6 einzigartige Lottozahlen(keine dopplungen)
            int neueZahl;
            int istEinzigartig;
            do{                             //generiert einzigartige Lottozahlen zwischen 1 und 49
               neueZahl=rand() % 49+1;
               istEinzigartig =1;            //Flag wenn einzigartig
                        
               for (int m = 0; m < 1; m++)      {           //überprüfung der bisherigen zahlen
                    if(lottozahlen[m] == neueZahl){
                        istEinzigartig=0;
                        break;
                    }
               }                
            }while (!istEinzigartig);       //Schleife wird wiederholt bis Zahl einzigartig(also nicht doppelt)
            lottozahlen[l]=neueZahl;        //neue Lottozahl wird gespeichert
        } 

        int richtige=0;                     //counter für richtige Zahlen + Vergleichsschleife  
        for(int j=0;j<6;j++){
            for(int k=0;k<6;k++){
                if(lottozahlen[j]==meintipp[k]){
                    richtige++;             //erhöht Counter für Richtige wenn, lottozahlen mit eigenem tipp übereinstimmen
                }
            }
        }
        if(richtige >= 3){                  //zählt die richtigen wenns mindestens 3 treffer dabei sind
            richtigeTreffer[richtige]++;
        }
    }
}
void Trefferquote(int* meintipp, int ziehungen, int* richtigeTreffer){
    printf("\nMit den Zahlen:\n\n");
    for (int i = 0; i < 6; i++)    {
            printf("\t%d ", meintipp[i]);
    }
    printf("\n--------------------------------------------------------\n");
    printf("\nWurden in %d Ziehungen folgende Treffer gefunden:\n\n", ziehungen);
    for(int i=3;i<7;i++){
        float prozent =(float)richtigeTreffer[i] / ziehungen *100;
        printf("\t%d Richtige: %d mal\t(%.2f %% Treffer)\n", i, richtigeTreffer[i], prozent);
    }
}

int main (){

    srand(time(0));             //"Zufallsgenerator" - muss in Hauptfunktion stehen

    int meintipp[6] = {12,18,21,36,40,46};   
    int ziehungen;                         
    int lottozahlen[6];                     
    int richtigeTreffer[7]={0};             
    char eigeneZahlen;                      

    printf("\n*************************Lotto**************************\n");
    //Eigene Nummern?
    mynumbers (meintipp, &eigeneZahlen);    
    
    printf("\n--------------------------------------------------------\n");
    //Runden
    anzahlZiehungen(&ziehungen);               
    //Hauptschleife
    rndlotto(meintipp, ziehungen, lottozahlen, richtigeTreffer);
  
    printf("\n--------------------------------------------------------\n");
    //Ausgabe
    Trefferquote(meintipp, ziehungen, richtigeTreffer);
    
    printf("\n**************************Ende***************************\n");
    
    return 0;
}
