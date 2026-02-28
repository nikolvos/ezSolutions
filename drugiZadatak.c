//
// Created by Familijo VI Ste on 2/28/2026.
//
#include <stdio.h>
void drugiZadatak(){

    int N;
    printf(" \n Unesite velicinu NxN matrice. \n N: ");
    scanf(" %d", &N);
    int garden[N][N];
    int pojedeneBiljkeIznadGlavneMatrice = 0;
    int nepojedeneBiljeNaSporednojMatrici = 0;

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf(" \n (1-9)- biljka . \n 0 - pojedena biljka \n  ");
            scanf(" %d",&garden[i][j]);

            if((i<j)&&garden[i][j]==0){
                pojedeneBiljkeIznadGlavneMatrice++;
            }

            if(j+i==N-1&&garden[i][j]!=0){
                nepojedeneBiljeNaSporednojMatrici++;
            }

        }
    }

    printf(" \n Broj biljaka koje je Biljana pojela je %d \n", pojedeneBiljkeIznadGlavneMatrice);

    printf(" \n Broj nepojedenih biljaka na sporednoj dijagonali je %d \n", nepojedeneBiljeNaSporednojMatrici);



}

