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

void kamen_nuzky_papir(char volba){
    int ai = rand()%3 +1;
    static int vyhry = 0;
    if(ai==1){
        printf("pocitac zvolil kamen: \n");
        printf("_______\n");
        printf("---'   ____)\n");
        printf("      (_____)\n");
        printf("      (_____)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
        
        if(volba=='k'){
            printf("remiza\n");
            printf("vyhry : %d\n",vyhry);
        }
        else if(volba=='n'){
            printf("prohral jsi\n");
            printf("vyhry : %d\n",vyhry);
        }
        else{
            printf("vyhral jsi\n");
            vyhry++;
            printf("vyhry : %d",vyhry);
        }
    }
    else if(ai==2){
        printf("pocitac zvolil papir: \n");
        printf("_______\n");
        printf("---'   ____)____\n");
        printf("          ______)\n");
        printf("          _______)\n");
        printf("         _______)\n");
        printf("---.__________)\n");
        if(volba=='p'){
            printf("remiza\n");
            printf("vyhry : %d\n",vyhry);
        }
        else if(volba=='k'){
            printf("prohral jsi\n");
            printf("vyhry : %d\n",vyhry);
        }
        else{
            printf("vyhral jsi\n");
            vyhry++;
            printf("vyhry : %d",vyhry);
        }
    }
    else if(ai==3){
        printf("pocitac zvolil nuzky: \n");
        printf("_______\n");
        printf("---'   ____)____\n");
        printf("          ______)\n");
        printf("       __________)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
        if(volba=='n'){
            printf("remiza\n");
            printf("vyhry : %d\n",vyhry);
        }
        else if(volba=='p'){
            printf("prohral jsi\n");
            printf("vyhry : %d\n",vyhry);
        }
        else{
            printf("vyhral jsi\n");
            vyhry++;
            printf("vyhry : %d\n",vyhry);
        }
    }
}
