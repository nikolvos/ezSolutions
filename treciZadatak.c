//
// Created by Familijo VI Ste on 2/28/2026.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[50];
    float price;
    float ammountInGrams;
    int isVegan; //1-yes 0-no

} Meal;

void printMeal( Meal m){
    printf("Ime obroka: %s \n", m.name);
    printf("Cena obroka: %.2f \n", m.price);
    printf("Gramaza: %.2f \n", m.ammountInGrams);
    printf("Veganski: ");
    if(m.isVegan == 1){
        printf("Da \n");
    }else if(m.isVegan==0){
        printf("Ne \n");
    }else{
        printf("nepoznato \n");
    }

}

void treciZadatak(){

    int N = 2;
    int nonVeganMealsCounter;
    float veganEarnings;
    Meal *meals = malloc(N*sizeof(Meal));
    for(int i = 0; i<N; i++){
        printf("\nUnesite ime:");
        scanf(" %s", &meals[i].name);
        printf("\nUnesite cenu:");
        scanf(" %f", &meals[i].price);
        printf("\nUnesite gramazu:");
        scanf(" %f", &meals[i].ammountInGrams);
        printf("\nDa li je veganski? (1-da 0-ne):");
        scanf(" %d", &meals[i].isVegan);

        if(meals[i].isVegan==1){
            veganEarnings += meals[i].price;

        }else if(meals[i].isVegan==0){
            nonVeganMealsCounter++;
        }

    }

    printf("\n=================\n");
    printf("SVI OBROCI\n");



    for(int i = 0; i<N; i++ ){
        printMeal(meals[i]);
    }


    printf("Kolicina neveganskih obroka je : %d \n", nonVeganMealsCounter);
    printf("Ukupan prihod veganskih obroka je : %.2f \n", veganEarnings);
}