#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "boletim.c"
int menuP;
void main(){
printf("\n--- PROVA7-LP ---\n");
printf("1-BOLETIM ESCOLAR\n");
printf("2-SAIR\n");
scanf("%d", &menuP);

switch(menuP){

    case 1:
    boletimEscolar();
    break;

    case 2:
    printf("\nOBRIGADO!");
    break;

    default:
    printf("\nOPÇAO INVALIDA (1-2)\n");
    main();
    break;
}
}