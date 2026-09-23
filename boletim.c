#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

FILE *boletins;
char aluno[40];
char situacao[];
float nota1 = 0.00, nota2 = 0.00, nota3 = 0.00, nota4 = 0.00, media = 0.00;
int menuB;

void boletimEscolar(){

printf("\n=== BOLETINS ===\n");
printf("1-CADASTRAR ALUNO\n");
printf("2-EXIBIR BOLETINS\n");// :( nao consegui
printf("3-SAIR\n");
scanf("%d", &menuB);

switch(menuB){

    case 1:
printf("NOME DO ALUNO:");
scanf("%s", aluno);
printf("1-NOTA MATEMATICA:");
scanf("%f", &nota1);
printf("2-NOTA HISTORIA:");
scanf("%f", &nota2);
printf("3-NOTA GEOGRAFIA:");
scanf("%f", &nota3);
printf("4-NOTA FILOSOFIA:");
scanf("%f", &nota4);

media = ((nota1 + nota2 + nota3 + nota4)/ 4);

if(media>=7){
    strcpy(situacao, "APROVADO");
}
if(media >= 5 && media < 7){
    strcpy(situacao, "RECUPERAÇAO");
}
if(media < 5){
    strcpy(situacao, "REPROVADO");
}

printf("\n=== BOLETIM ===\n");
printf("ALUNO: %s\n", aluno);
printf("NOTA MATEMATICA: %.2f\n", nota1);
printf("NOTA HISTORIA: %.2f\n", nota2);
printf("NOTA GEOGRAFIA: %.2f\n", nota3);//ta bugado
printf("NOTA FILOSOFIA: %.2f\n", nota4);//mesma coisa
printf("MEDIA: %.2f\n", media);
printf("STIUAÇAO: %s\n", situacao);

boletins = fopen("arquivos/boletins.txt", "a");
if (boletins == NULL){
    printf("ERRO AO ABRIR O ARQUIVO BOLETINS.TXT");
}

fprintf(boletins, "ALUNO %s\nNOTA MATEMATICA %.2f\nNOTA HISTORIA %.2f\nNOTA GEOGRAFIA %.2f\nNOTA FILOSOFIA %.2f\nMEDIA %.2f\nSITUAÇAO %s\n\n", aluno, nota1, nota2, nota3, nota4, media, situacao);
fclose(boletins);

printf("\nDESEJA CADASTRAR MAIS UM ALUNO?\n[1]SIM\n[2]NAO\n > ");
scanf("%d", &menuB);

switch(menuB){
    case 1:
    boletimEscolar();
    break;

    case 2:
    main();
    break;

    default:
    printf("OPÇAO INVALIDA (1-2)");
    break;
}
    break;

    case 2:
    boletins = fopen("arquivos/boletins.txt", "r");
    if(boletins == NULL){
        printf("ERRO AO ABRIR O ARQUIVO BOLETINS.TXT");
    }
    while(fscanf( "ALUNO %s\nNOTA MATEMATICA %.2f\nNOTA HISTORIA %.2f\nNOTA GEOGRAFIA %.2f\nNOTA FILOSOFIA %.2f\nMEDIA %.2f\nSITUAÇAO %s\n\n", aluno, &nota1, &nota2, &nota3, &nota4, &media, situacao)==7)
    {
        printf("ALUNO %s\nNOTA MATEMATICA %.2f\nNOTA HISTORIA %.2f\nNOTA GEOGRAFIA %.2f\nNOTA FILOSOFIA %.2f\nMEDIA %.2f\nSITUAÇAO %s\n\n", aluno, nota1, nota2, nota3, nota4, media, situacao);
    }
    fclose(boletins);
    break;

    case 3:
    printf("\nOBRIGADO!");
    break;
}




}