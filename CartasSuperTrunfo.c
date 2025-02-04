#include <stdio.h>

int main () {
    int populacao, numeropontosturisticos;
    float area, PIB;
    char codigocarta, nomecidade [50];
    
    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf ("%f", &area);

    printf("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeropontosturisticos);

    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos);
    
    return 0;

}