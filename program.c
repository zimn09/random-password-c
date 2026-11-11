#include <stdio.h>
#include <stdlib.h>
#include "program.h"
    
void generovani(int velikost, char zz, char zm, char zv, char zc){
    int ranznaky, ranmala , ranvelka , rancisla , ranturn;
    
    for(int i = 0;i<velikost;i++){
        int r = rand() % 2;

        if(r == 0){
            ranznaky = rand() % 15 + 33;
        }
        else{
            ranznaky = rand() % 7 + 58;
        }       
        ranmala = rand()%(122-97+1) + 97;
        ranvelka = rand()%(90-65+1) + 65;
        rancisla = rand()%(57-48+1) + 48;
        ranturn = rand()%4 +1;
        if(ranturn==1){
            if(zz=='n'){
                i--;
                continue;
            }
            else{
                printf("%c",ranznaky);
            }
        }
        if(ranturn==2){
            if(zm=='n'){
                i--;
                continue;
            }
            else{
                printf("%c",ranmala);
            }
        }
        if(ranturn==3){
            if(zv=='n'){
                i--;
                continue;
            }
            else{
                printf("%c",ranvelka);
            }
        }
        if(ranturn==4){
            if(zc=='n'){
                i--;
                continue;
            }
            else{
                printf("%c",rancisla);
            }
        }
    }
}

