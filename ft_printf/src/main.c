#include <stdio.h>
#include "../include/ft_printf.h"

int main() {
    int num = 42;
    float f = 3.14;
    char* str = "Hola, mundo!";

    // Pruebas de tu función printf personalizada
    ft_printf("Entero: %d\n", num);
    ft_printf("Flotante: %.2f\n", f);
    ft_printf("Cadena: %s\n", str);

    return 0;
}

// Implementa tu función printf personalizada aquí
int ft_printf(const char* format, ...) {
    // Implementación de la función printf personalizada
    // ...

    return 0; // O el número de caracteres impresos correctamente
}

