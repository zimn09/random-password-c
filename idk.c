#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generovani(int velikost, char zz, char zm, char zv, char zc);

int main(){
    int q;
    srand(time(NULL));
    printf("--------------------ultimatni tool--------------------\n");
    printf("vyberte tool : ");
    scanf("%d",&q);
    switch(q){
        case 1:{
            int velikost;
            char zahrnout_znaky, zahrnout_mala, zahrnout_velka, zahrnout_cisla;
            printf("--------------------random password generator--------------------\n");
            printf("velikost hesla : ");
            scanf("%d",&velikost);
            printf("zahrnou znaky (y,n) : ");
            scanf(" %c",&zahrnout_znaky);
            printf("zahrnou male pismena (y,n) : ");
            scanf(" %c",&zahrnout_mala);
            printf("zahrnou velka pismena (y,n) : ");
            scanf(" %c",&zahrnout_velka);
            printf("zahrnou cisla (y,n) : ");
            scanf(" %c",&zahrnout_cisla);
            generovani(velikost,zahrnout_znaky, zahrnout_mala, zahrnout_velka, zahrnout_cisla);
            break;
        }
        case 2:{
            char slovo[] = "";
            printf("--------------------sifrovac a desifrovac--------------------\n");
            printf("napiste slovo : ");
            scanf("%s",&slovo);
            int length = 0;
    
            while (slovo[length] != '\0')
            {
                length++;
            }
            printf("%d",length);
        }
    }
}

void generovani(int velikost, char zz, char zm, char zv, char zc){
    int ranznaky, ranmala , ranvelka , rancisla , ranturn, ransum=0;
    
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

