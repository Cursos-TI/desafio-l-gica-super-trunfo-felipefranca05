#include <stdio.h>

int main() {
    char estado1[12] = "Minas Gerais";
    char código1[4] = "A01";
    char cidade1[16] = "Belo Horizonte";
    int população1;

        printf("Digite o código1:\n");
              scanf("%s", código1);
        printf("Digite o nome do Estado1:\n");
              scanf("%s", estado1);
        printf("Digite o nome da cidade1:\n");
              scanf("%s", cidade1);
        printf("Digite a população1:\n");
              scanf("%d", &população1);


    char estado2[10] = "São Paulo";
    char código2[4] = "A02";
    char cidade2[10] = "São Paulo";
    int população2;

      
        printf("Digite o código2:\n");
            scanf(" %s", código2);
        printf("Digite o nome do estado2 \n");
            scanf(" %s", estado2);
        printf("Digite o nome da cidade2:\n");
            scanf(" %s", cidade2);
        printf("Digite a população2:\n");
            scanf(" %d", &população2);


            if(população1 > população2) {
               printf("Cidade1 tem maior população. , portanto é vencedora. \n");
            } else {
               printf("Cidade 2 tem maior população, portanto é vencedora. \n");
            }

    return 0;
}
