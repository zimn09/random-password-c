#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "program.h"

void generovani(int velikost, char zz, char zm, char zv, char zc);

int main(){
    int q;
    srand(time(NULL));
    printf("--------------------ultimatni tool--------------------\n");
    printf("vyberte tool (1=generovani hesla, 2=sifrovac a desifrovac): ");
    scanf("%d",&q);
    switch(q){
        case 1:{
            int velikost;
            char zahrnout_znaky, zahrnout_mala, zahrnout_velka, zahrnout_cisla;
            printf("--------------------random password generator--------------------\n");
            while(velikost<=0){
                printf("velikost hesla : ");
                scanf("%d",&velikost);
            }
            while(zahrnout_znaky!='y'&&zahrnout_znaky!='n'){
                printf("zahrnou znaky (y,n) : ");
                scanf(" %c",&zahrnout_znaky);
            }
            while(zahrnout_mala!='y'&&zahrnout_mala!='n'){
                printf("zahrnou male pismena (y,n) : ");
                scanf(" %c",&zahrnout_mala);
            }
            while(zahrnout_velka!='y'&&zahrnout_velka!='n'){
                printf("zahrnou velka pismena (y,n) : ");
                scanf(" %c",&zahrnout_velka);
            }
            while(zahrnout_cisla!='y'&&zahrnout_cisla!='n'){
                printf("zahrnou cisla (y,n) : ");
                scanf(" %c",&zahrnout_cisla);
            }
            generovani(velikost,zahrnout_znaky, zahrnout_mala, zahrnout_velka, zahrnout_cisla);
            break;
        }
        case 2:{
            char slovo[50] = "";
            char s_d;
            printf("--------------------sifrovac a desifrovac--------------------\n");
            while(s_d!='s' && s_d!='d'){
            printf("chcete sifrovat nebo desifrovat (s,d) : ");
            scanf(" %c",&s_d);
            }
            printf("napiste slovo : ");
            scanf("%s",&slovo);
            int length = 0;
    
            while (slovo[length] != '\0')
            {
                length++;
            }
            if(s_d=='s'){
                for(int i=0;i<length;i++){
                    slovo[i]++;
                    
                    printf("%c",slovo[i]);
                }
                printf("\n");
            }
            else if(s_d=='d'){
                for(int i=0;i<length;i++){
                    slovo[i]--;
                    printf("%c",slovo[i]);
                }
            }
        }
    }
    return 0;
}

