#include <stdio.h>

int main (){

    // carta 1

char estado1 [20];
char codico1;
char cidade1 [20];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

//carta 2

char estado2 [20];
char codico2;
char cidade2 [20];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

printf ("Cadastro da primeira carta: \n");

printf ("Digite seu estado: \n");
scanf("%s", &estado1);

printf ("Digite seu codico: \n");
scanf ("%d", &codico1);

printf ("Digite sua cidade: \n");
scanf ("%s", cidade1);

printf ("Digite a população: \n");
scanf ("%f", &populacao1);

printf (" Digite a area: \n");
scanf ("%f", &area1);

printf ("digite seu pib: \n");
scanf ("%d", &pib1);

printf ("Digite os pontos turisticos; \n");
scanf ("%d", &pontosturisticos1);

printf ("Cadastro da segunda carta: \n");


printf ("Digite seu estado: \n");
scanf("%s", &estado2);

printf ("Digite seu codico: \n");
scanf ("%d", &codico2);

printf ("Digite sua cidade: \n");
scanf ("%s", cidade2);

printf ("Digite a população: \n");
scanf ("%f", &populacao2);

printf (" Digite a area: \n");
scanf ("%f", &area2);

printf ("digite seu pib: \n");
scanf ("%d", &pib2);

printf ("Digite os pontos turisticos; \n");
scanf ("%d", &pontosturisticos2);


return 0;


}

