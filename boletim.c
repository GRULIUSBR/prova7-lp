#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char aluno[40];
char situacao[];
float nota1, nota2, nota3, nota4, media;

void boletimEscolar(){
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

media = (nota1 + nota2 + nota3 + nota4)/ 4;

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
printf("NOTA GEOGRAFIA: %.2f\n", nota3);
printf("NOTA FILOSOFIA: %.2f\n", nota4);
printf("MEDIA: %.2f\n", media);
printf("STIUAÇAO: %s\n", situacao);


}