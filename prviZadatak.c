//
// Created by Familijo VI Ste on 2/28/2026.
//
#include <stdio.h>
void prviZadatak(){
    int N = 10;
    printf("unesite velicinu broja : \n");
    scanf(" %d", &N);
    char poruka[N];
    int nule = 0;
    int jedinice = 0;


    for(int i = 0; i<N; i++){
        printf("unesite ");
        printf("%d", i+1);
        printf(".");
        printf(" cifru : \n");
        scanf(" %c", &poruka[i]);
        if (poruka[i]=='0'){
            nule++;
        }else if(poruka[i]=='1'){
            jedinice++;
        };
    };
    int ostaliZnaci = (N+1) - (nule+jedinice);

    printf("\njedinice (1) :");
    printf(" %d", jedinice);
    printf("\nnule (0) :");
    printf(" %d", nule);
    printf("\nostali znaci (?) :");
    printf(" %d", ostaliZnaci);
    printf("\n");
}
