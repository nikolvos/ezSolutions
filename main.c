#include <stdio.h>

void treciZadatak();
void drugiZadatak();
void prviZadatak();

int main(){
    printf("Dobrodosli u resenja za Blanketi/OP_2024_07_ispit.pdf");
    printf("\n===================================\n");

    printf("1 - Zadatak 1\n");
    printf("2 - Zadatak 2\n");
    printf("3 - Zadatak 3\n");
    printf("Izaberite program koji zelite da pokrenete:\n");
    int n;
    scanf(" %d", &n);
    while(n!=0){
        if(n==1){
            prviZadatak();
            printf("0-exit 87-back");
            scanf(" %d",&n);

        }else if(n==2){
            drugiZadatak();
            printf("0-exit 87-back");
            scanf(" %d",&n);
            if(n==87) {
                main();
            }

        }else if(n==3){
            treciZadatak();
            printf("0-exit 87-back");
            scanf(" %d",&n);
            if(n==87) {
                main();
            }

        }


    }


    return 0;

}


