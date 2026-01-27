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
float densidade1, pibpercapita1;
float superpoder1;
float resultadocarta1;
                                int popu01;
                                int area01;
                                int pib01;
                                int pibper01;
                                int densi01;
                                int superpoder01;

//carta 2

char estado2 [20];
char codico2;
char cidade2 [20];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;
float densidade2, pibpercapita2;
float superpoder2;
float resultadocarta2;

                                int popu02;
                                int area02;
                                int pib02;
                                int pibper02;
                                int densi02;
                                int superpoder02;
                                


printf ("***Cadastro da primeira carta***: \n");

printf ("Digite seu estado: \n");
scanf("%s", &estado1);

printf ("Digite seu codico: \n");
scanf ("%d", &codico1);

printf ("Digite sua cidade: \n");
scanf ("%s", cidade1);

printf ("Digite a população: \n");
scanf ("%d", &populacao1);

printf (" Digite a area: \n");
scanf ("%f", &area1);

printf ("digite seu pib: \n");
scanf ("%f", &pib1);

printf ("Digite os pontos turisticos; \n");
scanf ("%d", &pontosturisticos1);

densidade1 = populacao1 / area1;
pibpercapita1 = pib1 / populacao1;

printf ("densidade populacional: %f\n", densidade1);
printf ("PIB per capita: %f\n", pibpercapita1);

superpoder1 = (float)populacao1 
                + area1 
                + pib1 
                + pibpercapita1 
                + densidade1;

printf ("O super poder: %f\n", superpoder1);



printf ("***Cadastro da segunda carta***: \n");


printf ("Digite seu estado: \n");
scanf("%s", &estado2);

printf ("Digite seu codico: \n");
scanf ("%d", &codico2);

printf ("Digite sua cidade: \n");
scanf ("%s", cidade2);

printf ("Digite a população: \n");
scanf ("%d", &populacao2);

printf (" Digite a area: \n");
scanf ("%f", &area2);

printf ("digite seu pib: \n");
scanf ("%f", &pib2);

printf ("Digite os pontos turisticos; \n");
scanf ("%d", &pontosturisticos2);

densidade2 = populacao2 / area2;
pibpercapita2 = pib2 / populacao2;

printf ("Densidade populacional: %f\n", densidade2);
printf ("PIB per capita: %f\n", pibpercapita2);

superpoder2 = (float)populacao2 
                 + area2
                 + pib2 
                 + pibpercapita2 
                 + densidade2;

printf ("O super poder: %f\n", superpoder2);

// comparação das cartas 

// população
        popu01 = populacao1 > populacao2;
        popu02 = populacao2 > populacao1;

        //area 
        area01 = area1 > area2;
        area02 = area2 > area1;
        
        //pib
        pib01 = pib1 > pib2;
        pib02 = pib2 > pib1;

        //pib per capita 
        pibper01 = pibpercapita1 > pibpercapita2;
        pibper02 = pibpercapita2 > pibpercapita1;

        //densidade populacional
        densi01 = densidade1 > densidade2;
        densi02 = densidade2 > densidade1;

        //super poder 
        superpoder01 = superpoder1 > superpoder2;
        superpoder02 = superpoder2 > superpoder1;

        printf ("A população carta 1: %d população carta 2: %d\n", popu01, popu02);
        printf ("A area carta 1: %d area carta 2: %d\n", area01, area02);
        printf ("O pib da carta 1: %d pib carta 2: %d\n", pib01, pib02);
        printf ("O pib per capita da carta 1: %d pib per capita carta 2: %d\n", pibper01, pibper02);
        printf (" A densidade da carta 1: %d desnidade carta 2: %d\n", densi01, densi02);
        printf ("O super poder carta 1: %d super poder carta 2: %d\n", superpoder01, superpoder02);


return 0;


}

