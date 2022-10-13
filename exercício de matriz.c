#include <stdio.h>

void main(){
int vmatriz[3][3], i, j, soma;

for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("digite alguns valores: ");
        scanf("%i", &vmatriz[i][j]);

        }

    }
for(i = 0; i< 3; i++){
    for(j = 0; j < 3; j++){
       printf("\t%i", vmatriz[i][j]);
       soma = soma + vmatriz[i][j];
        }
    printf("\n");
    }
printf("soma: %i", soma);
}