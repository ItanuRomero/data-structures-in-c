#include <stdio.h>

int main()
{
    float productValue;
    char paymentMethod;
    float finalValue;
    
    printf("Insira o valor do produto: ");
    scanf("%f", &productValue);
    printf("Insira o formato de pagamento: ");
    scanf("%c", &paymentMethod);
    if (productValue <= 100 && paymentMethod == "A") {
        printf("Desconto de 10 por cento");
        finalValue = productValue * 0.9;
    } else if (productValue <= 100 && paymentMethod == "P") {
        printf("Desconto de 15 por cento");
        finalValue = productValue * 0.85;
    } else if (productValue > 100 && paymentMethod == "P") {
        printf("juros 10 por cento");
        finalValue = productValue * 1.1;
    } else {
        printf("sem juros ou desconto");
        finalValue = productValue;
    }
    printf("Valor final: %f", finalValue);

    return 0;
}