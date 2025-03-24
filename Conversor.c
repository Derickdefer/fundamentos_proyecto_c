#include <stdio.h>

// Tasas de cambio (ejemplo, puedes actualizarlas)
#define USD_TO_GTQ 7.75
#define EUR_TO_GTQ 8.50
#define USD_TO_EUR 0.91

void convertirGTQaUSD(float cantidad) {
    printf("%.2f GTQ = %.2f USD\n", cantidad, cantidad / USD_TO_GTQ);
}

void convertirGTQaEUR(float cantidad) {
    printf("%.2f GTQ = %.2f EUR\n", cantidad, cantidad / EUR_TO_GTQ);
}

void convertirUSDaGTQ(float cantidad) {
    printf("%.2f USD = %.2f GTQ\n", cantidad, cantidad * USD_TO_GTQ);
}

void convertirUSDaEUR(float cantidad) {
    printf("%.2f USD = %.2f EUR\n", cantidad, cantidad * USD_TO_EUR);
}

void convertirEURaGTQ(float cantidad) {
    printf("%.2f EUR = %.2f GTQ\n", cantidad, cantidad * EUR_TO_GTQ);
}

void convertirEURaUSD(float cantidad) {
    printf("%.2f EUR = %.2f USD\n", cantidad, cantidad / USD_TO_EUR);
}

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de monedas\n");
    printf("1. GTQ a USD\n");
    printf("2. GTQ a EUR\n");
    printf("3. USD a GTQ\n");
    printf("4. USD a EUR\n");
    printf("5. EUR a GTQ\n");
    printf("6. EUR a USD\n");
    printf("Seleccione una opción de 1 a 6: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch (opcion) {
        case 1:
            convertirGTQaUSD(cantidad);
            break;
        case 2:
            convertirGTQaEUR(cantidad);
            break;
        case 3:
            convertirUSDaGTQ(cantidad);
            break;
        case 4:
            convertirUSDaEUR(cantidad);
            break;
        case 5:
            convertirEURaGTQ(cantidad);
            break;
        case 6:
            convertirEURaUSD(cantidad);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}