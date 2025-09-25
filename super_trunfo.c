#include <stdio.h>

int main(){

// Carta 1 

char Estado[20];
char Codigo[20];
char Nome_da_cidade[20];
unsigned long int populacao;
float area;
float PIB;
int numerodepontosturisticos;
float densidadepopulacional;
float pibpercapita;
float superpoder;



// CADASTRO DA CARTA 1

printf("            =======Cadastramento das cartas=======\n\n");
printf("Coloque as siglas do estado e o código com um numéro. ex: (CE,CE01)(SP,SP01)\n\n");

printf("---- Digite aqui a primeira carta ----\n\n");
printf("Estado: \n");
scanf("%s", Estado);

printf("Código: \n");
scanf("%s", Codigo);

printf("Nome da cidade: \n");
scanf("%s", Nome_da_cidade);

printf("População: \n");
scanf("%lu", &populacao);

printf("Área: \n");
scanf("%f", &area);

printf("PIB: \n");
scanf("%f", &PIB);

printf("Números de pontos turisticos: \n");
scanf("%d", &numerodepontosturisticos);

printf("\n");

// Divindo a densidade e pib
densidadepopulacional = populacao / area;
pibpercapita = (float) PIB / populacao;
float inversodensidade1 = 1.0 / densidadepopulacional; // inverso da densidade
superpoder = populacao + area + PIB + numerodepontosturisticos + pibpercapita + inversodensidade1;


// MOSTRANDO A CARTA 1
printf("===== Essa é a carta 1: ===== \n");

printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Nome da cidade: %s\n", Nome_da_cidade);
printf("População: %lu\n", populacao);
printf("Área: %.3f\n", area);
printf("PIB: %.5f\n", PIB);
printf("Número de pontos turisticos: %d\n", numerodepontosturisticos);
printf("A densidade populacional é: %.2f hab/km² \n", densidadepopulacional);
printf("O PIB per carpita é: %.2f reais \n\n", pibpercapita);

printf("=================================================================================== \n");


char estado2[20];
char codigo2[20];
char nomecidade2[20];
unsigned long int populacao2;
float area2;
float pib2;
int numerodepontos2;
float densidadepopulacional2;
float pibpercapita2;
float superpoder2;



// CADASTRAR CARTA 2

printf("\n");
printf("---- Digite aqui a carta 2 ----\n\n");
printf("Estado: \n");
scanf("%s", estado2);

printf("Código: \n");
scanf("%s", codigo2);

printf("Nome da cidade: \n");
scanf("%s", nomecidade2);

printf("População: \n");
scanf("%lu", &populacao2);

printf("Área: \n");
scanf("%f", &area2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Números de pontos turisticos: \n");
scanf("%d", &numerodepontos2);

printf("\n");

// Dividindo a densidade e pib

densidadepopulacional2 = populacao2 / area2;
pibpercapita2 = pib2 / populacao2;
float inversodensidade2 = 1.0 / densidadepopulacional; // inverso da densidade
superpoder2 = populacao2 + area2 + pib2 + numerodepontos2 + pibpercapita2 + inversodensidade2;

printf("===== Essa é a carta 2: ===== \n");


printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomecidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.3f\n", area2);
printf("PIB: %.3f\n", pib2);
printf("Número de pontos turisticos: %d\n", numerodepontos2);
printf("A densidade populacional é: %.2f hab/km² \n", densidadepopulacional2);
printf("O PIB per carpita é: %.2f reais \n", pibpercapita2);


// COMPARAÇOES DAS CARTAS

printf("\n =================================================== \n");
printf("Comparação das 2 cartas: \n");

printf("Populacao: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2)); 
printf("Area: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2));  // O QUE FOR MAIOR VENCE >
printf("PIB: Carta %d venceu (%d)\n", (PIB > pib2) ? 1 : 2, (PIB > pib2)); 
printf("Pontos Turisticos: Carta %d venceu (%d)\n", (numerodepontosturisticos > numerodepontos2) ? 1 : 2, (numerodepontosturisticos > numerodepontos2)); 
printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadepopulacional < densidadepopulacional2) ? 1 : 2, (densidadepopulacional < densidadepopulacional2)); // o que for MENOR vence >
printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita > pibpercapita2) ? 1 : 2, (pibpercapita > pibpercapita2)); 
printf("Super Poder: Carta %d venceu (%d)\n\n", (superpoder > superpoder2) ? 1 : 2, (superpoder > superpoder2)); 


// COMPARAÇOES DOS ATRIBUTOS IF E ELSE

printf("==========================================================================================\n\n");
printf("Agora vamos ver de uma forma mais clara os atributos e quem venceu:\n\n");
printf("A cidade que tem a maior população é:\n");

if(populacao > populacao2){
    printf(" Carta 1: %s(%s) (População: %lu)\n\n", Nome_da_cidade, Estado, populacao);
} else {
    printf(" Carta 2: %s(%s) (População: %lu)\n\n", nomecidade2, estado2, populacao2);
}
printf("A cidade com a maior Área é:\n");

if (area > area2){
    printf(" Carta 1: %s(%s) (Área = %.2f)\n\n", Nome_da_cidade, Estado, area);
} else {
    printf(" Carta 2: %s(%s) (Área = %.2f)\n\n", nomecidade2, estado2, area2);
}

printf("A cidade com maior PIB é:\n");
if (PIB > pib2)
{
    printf("Carta 1: %s(%s) (PIB: %.3f)\n\n", Nome_da_cidade, Estado, PIB);
} else {
    printf("Carta 2: %s(%s) (PIB: %.3f)\n\n", nomecidade2, estado2, pib2);
}

printf("A cidade com maior número de pontos túristicos é:\n");
if(numerodepontosturisticos > numerodepontos2){
    printf("Carta 1: %s(%s) (Número de pontos: %d)\n\n", Nome_da_cidade, Estado, numerodepontosturisticos);
} else{
    printf("Carta 2: %s(%s) (Número de pontos: %d)\n\n", nomecidade2, estado2, numerodepontos2);
}

printf("A cidade com maior densidade populacional  é:\n");
if(densidadepopulacional > densidadepopulacional2){
    printf("Carta 1: %s(%s) (Densidade populacional: %.2f)\n\n", Nome_da_cidade, Estado, densidadepopulacional);
} else{
    printf("Carta 2: %s(%s) (Densidade populacional: %.2f)\n\n", nomecidade2, estado2, densidadepopulacional2);
}

printf("A cidade com maior PIB per capita é:\n");
if(pibpercapita > pibpercapita2){
    printf("Carta 1: %s(%s) (PIB per capita: %.2f)\n\n", Nome_da_cidade, Estado, pibpercapita);
} else {
    printf("Carta 2: %s(%s) (PIB per capita: %.2f)\n\n", nomecidade2, estado2, pibpercapita2);
}


// MENU INTERATIVO

int opcao, atributos;

printf("Você quer comparar algum atributo especifico?\n");
printf("1. Sim\n");
printf("2. Não\n");
scanf("%d", &opcao);

switch (opcao)
{
    case 1:
    printf("Qual atributo você quer comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributos);    
    switch (atributos)
    {
    case 1: // POPULAÇAO
        if(populacao > populacao2){
    printf("Carta 1: %s(%s) (População: %lu) VENCEDOR!\n\n", Nome_da_cidade, Estado, populacao);
    printf("Carta 2: %s(%s) (População: %lu)\n\n", nomecidade2, estado2, estado2);
} else if (populacao < populacao2) { 
    printf("Carta 1: %s(%s) (População: %lu)\n\n", Nome_da_cidade, Estado, populacao);
    printf("Carta 2: %s(%s) (População: %lu)  VENCEDOR!\n\n", nomecidade2, estado2, estado2);
} else{
    printf("Houve um empate!\n");
}
    case 2: // AREA
    if (area > area2){
    printf(" Carta 1: %s(%s) (Área = %.2f) VENCEDOR!\n\n", Nome_da_cidade, Estado, area);
    printf(" Carta 2: %s(%s) (Área = %.2f)\n\n", nomecidade2, estado2, area2);
} else if (area < area2)
{
    printf(" Carta 1: %s(%s) (Área = %.2f)\n\n", Nome_da_cidade, Estado, area);
    printf(" Carta 2: %s(%s) (Área = %.2f)  VENCEDOR!\n\n", nomecidade2, estado2, area2);
} else{
    printf("Houve um empate!\n"); 
}
    
    case 3: // PIB
    if (PIB > pib2)
{
    printf("Carta 1: %s(%s) (PIB: %.3f) VENCEDOR!\n\n", Nome_da_cidade, Estado, PIB);
    printf("Carta 2: %s(%s) (PIB: %.3f)\n\n", nomecidade2, estado2, pib2);

} else if (PIB < pib2){
    printf("Carta 1: %s(%s) (PIB: %.3f)\n\n", Nome_da_cidade, Estado, PIB);
    printf("Carta 2: %s(%s) (PIB: %.3f) VENCEDOR!\n\n", nomecidade2, estado2, pib2);
} else{
    printf("Houve um empate!\n"); 
}
    case 4: 
    if(numerodepontosturisticos > numerodepontos2){
    printf("Carta 1: %s(%s) (Número de pontos: %d) VENCEDOR!\n\n", Nome_da_cidade, Estado, numerodepontosturisticos);
    printf("Carta 2: %s(%s) (Número de pontos: %d)\n\n", nomecidade2, estado2, numerodepontos2);

} else if(numerodepontosturisticos < numerodepontos2) {
    printf("Carta 1: %s(%s) (Número de pontos: %d)\n\n", Nome_da_cidade, Estado, numerodepontosturisticos);
    printf("Carta 2: %s(%s) (Número de pontos: %d) VENCEDOR!\n\n", nomecidade2, estado2, numerodepontos2);
} else{
    printf("Houve um empate!\n"); 
}

    case 5:
    if(densidadepopulacional > densidadepopulacional2){
    printf("Carta 1: %s(%s) (Densidade populacional: %.2f) VENCEDOR!\n\n", Nome_da_cidade, Estado, densidadepopulacional);
    printf("Carta 2: %s(%s) (Densidade populacional: %.2f)\n\n", nomecidade2, estado2, densidadepopulacional2);
} else if(densidadepopulacional < densidadepopulacional2){
    printf("Carta 1: %s(%s) (Densidade populacional: %.2f)\n\n", Nome_da_cidade, Estado, densidadepopulacional);
    printf("Carta 2: %s(%s) (Densidade populacional: %.2f) VENCEDOR!\n\n", nomecidade2, estado2, densidadepopulacional2);
} else{
    printf("Houve um empate!\n"); 
}

    }
    break;


    case 2:
    printf("OK, volte quando quiser!\n");
    
    default:
    printf("Opção inválida!\n");
    break;
}






return 0;


}


