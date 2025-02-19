#include <stdio.h>

//int main (){

    char estado;
    char codigoCarta[10];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
 
    printf("Vamos para a instrução: Esolha entre os estados abaixo de A-H\n");
    
    printf("A - Santa Catarina\n B - Minas Gerais\n C - Ceará\n D - Distrito Federal\n E - Espirito Santo\n F - Rio de Janeiro\n G - São Paulo\n H - Rio Grande do Sul\n");
    scanf("%c", &estado);

    while (getchar() != '\n');

    printf("Agora vamos escolher o código da carta, devera digitar um código de dois digitos começado por 0 , seguido de um número que deverá estar dentro de 1 - 4\n");
    scanf("%s", &codigoCarta);

        
    

    printf("A sua carta é:\n %c\n %c%s\n", estado, estado, codigoCarta);

    
}