#include <stdio.h>

int main(){

// Carta 1 - Ceara

printf("===== CARTA 1 =====\n");


char Estado[20] = "C";
char Codigo[20] = "C01";
char Nome_da_cidade[20] = "Fortaleza";
int população = 2428708;
float area = 312.353;
float PIB = 27164450000.0;
int Número_de_pontos_turisticos = 14;
float densidadepopulacional1;
float pibpercapita1;

// Divindo

densidadepopulacional1 = população / area;

pibpercapita1 = (float) PIB / população;




printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Nome da cidade: %s\n", Nome_da_cidade);
printf("População: %d\n", população);
printf("Área: %.3f\n", area);
printf("PIB: %.5f\n", PIB);
printf("Número de pontos turisticos: %d\n", Número_de_pontos_turisticos);
printf("A densidade populacional é: %.2f hab/km² \n", densidadepopulacional1);
printf("O PIB per carpita é: %.2f \n\n", pibpercapita1);




// Carta 2 - Florianópolis

printf("===== CARTA 2 =====\n");



char estado[20] = "S";
char codigo[20] = "S02";
char nomecidade[20] = "Florianópolis";
int populacao = 587486;
float Area = 674.844;
float pib = 23600000000.0;
int numerodepontos = 30;
float densidadepopulacional2;
float pibpercapita2;

// Dividindo 

densidadepopulacional2 = populacao / Area;

pibpercapita2 = pib / populacao;


printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", nomecidade);
printf("População: %d\n", populacao);
printf("Área: %.3f\n", Area);
printf("PIB: %.3f\n", pib);
printf("Número de pontos turisticos: %d\n", numerodepontos);
printf("A densidade populacional é: %.2f hab/km² \n", densidadepopulacional2);
printf("O PIB per carpita é: %.2f \n", pibpercapita2);





}


