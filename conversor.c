#include <stdio.h>
#include <stdlib.h>

void metros_A_Km();
void gramos_A_kilos();
void km_A_metros();
void kg_A_gramo();

int main()
{
    int rta;
    do
    {
        int opcion;
        do
        {
            printf("\n                              **MENU**                        \n");
            printf("1: Convertir METROS a KM.\n");
            printf("2: Convertir GRAMOS a KILOGRAMOS.\n");
            printf("3: Convertir KM a METROS.\n");
            printf("4: Convertir KILOGRAMOS a GRAMOS.\n");
            printf("Elija una opcion con los numeros ubicados: ");
            scanf("%d", &opcion);
        } while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4);

        switch (opcion)
        {
            case 1:
                metros_A_Km();
                break;
            case 2:
                gramos_A_kilos();
                break;
            case 3:
                km_A_metros();
                break;
            case 4:
                kg_A_gramo();
                break;
            default:
                printf("\nNumero equivocado.\n");
                break;
        }

        do
        {
            printf("\n1: Finalizar Programa - 2: Continuar Convirtiendo: ");
            scanf("%d", &rta);
            if (rta != 1 && rta != 2)
            {
                printf("Numero equivocado.\n");
            }
        } while (rta != 1 && rta != 2);

    } while (rta == 2);

    return 0;
}

void metros_A_Km()
{
    float metros, kilometros;
    printf("\nVamos a convertir metros a kilometros.\n");
    printf("Ingrese los metros deseados: ");
    scanf("%f", &metros);
    kilometros = metros * 0.001;
    printf("Los %.1f metros son: %.1f kilometros.\n", metros, kilometros);
}

void gramos_A_kilos()
{
    float gramos, kilogramos;
    printf("\nVamos a convertir gramos a kilogramos.\n");
    printf("Ingrese los gramos a convertir: ");
    scanf("%f", &gramos);
    kilogramos = gramos * 0.001;
    printf("Los %.1f gramos son: %.1f kilogramos.\n", gramos, kilogramos);
}

void km_A_metros()
{
    float km, metro;
    printf("\nVamos a convertir kilometros a metros.\n");
    printf("Ingrese los kilometros deseados: ");
    scanf("%f", &km);
    metro = km * 1000;
    printf("Los %.1f kilometros son: %.1f metros.\n", km, metro);
}

void kg_A_gramo()
{
    float kg, gr;
    printf("\nVamos a convertir kilogramos a gramos.\n");
    printf("Ingrese los kilogramos a convertir: ");
    scanf("%f", &kg);
    gr = kg * 1000;
    printf("Los %.1f kilogramos son: %.1f gramos.\n", kg, gr);
}
