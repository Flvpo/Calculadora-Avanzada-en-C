#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declaración de funciones
float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: No se puede dividir por cero.\n");
        return 0;
    }
}

float potencia(float base, float exponente) {
    return pow(base, exponente);
}

float raizCuadrada(float num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        printf("Error: No se puede calcular la raíz cuadrada de un número negativo.\n");
        return 0;
    }
}

float seno(float angulo) {
    return sin(angulo);
}

float coseno(float angulo) {
    return cos(angulo);
}

int main() {
    float num1, num2, resultado;
    int opcion;

    while (1) {
        system("cls || clear");  // Limpiar la consola en sistemas Windows o Unix

        printf("Calculadora avanzada en C\n");
        printf("Opciones:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. División\n");
        printf("5. Potencia (Base y Exponente)\n");
        printf("6. Raiz Cuadrada de un numero\n");
        printf("7. Seno (Angulo en Radianes)\n");
        printf("8. Coseno (Angulo en Radianes)\n");
        printf("9. Salir\n");
        printf("Ingrese el número de la opcion que desea: ");
        scanf("%d", &opcion);

        if (opcion == 9) {
            printf("¡Hasta luego!\n");
            break; // Salir del bucle si se selecciona la opción de salida
        }

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese el primer numero: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num2);
        } else if (opcion == 5 || opcion == 6 || opcion == 7 || opcion == 8) {
            printf("Ingrese el primer numero: ");
            scanf("%f", &num1);

            if (opcion == 5) {
                printf("Ingrese el exponente: "); // Para la opción de potencia
                scanf("%f", &num2);
            } else {
                num2 = 0; // Establecer num2 en 0 para otras opciones
            }
        } else {
            printf("Opcion no valida. Intentelo de nuevo.\n");
            continue; // Regresar al inicio del bucle si la opción no es válida
        }

        switch (opcion) {
            case 1:
                resultado = suma(num1, num2);
                break;
            case 2:
                resultado = resta(num1, num2);
                break;
            case 3:
                resultado = multiplicacion(num1, num2);
                break;
            case 4:
                resultado = division(num1, num2);
                break;
            case 5:
                resultado = potencia(num1, num2);
                break;
            case 6:
                resultado = raizCuadrada(num1);
                break;
            case 7:
                resultado = seno(num1);
                break;
            case 8:
                resultado = coseno(num1);
                break;
        }

        printf("El resultado es: %.2f\n", resultado);
        printf("Presione Enter para continuar...");
        getchar(); // Esperar a que el usuario presione Enter antes de continuar
        getchar(); // Leer el Enter adicional
    }

    return 0;
}