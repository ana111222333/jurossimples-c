#include <stdio.h>

float jurosSimples(float capital, float taxa, int tempo);

int main() {

    float capital;
    float taxa;
    int tempo;

    printf("Digite o capital: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite o tempo: ");
    scanf("%d", &tempo);

    float juros = jurosSimples(capital, taxa, tempo);

    printf("Juros = %.2f\n", juros);

    printf("Criado por Ana");

    return 0;
}
