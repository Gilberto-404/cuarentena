#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    static char numero1[500], numero2[500],aux[500];
    static int Entero1[500], Entero2[500],aux1[1], aux2[1],loong1, loong2, indice, acarreo;


    printf("\nIngresa un numero:\n");
    scanf("%s", numero1);

    printf("\nIngresa un numero:\n");
    scanf("%s", numero2);

    if (numero1 > 0 && numero2 > 0)
    {
        printf("===> Los numeros son positivos\n\n");
    }
    else
    {
        printf("===> Los numeros son negativos\n");
    }
    
    loong1 = strlen(numero1) - 1;
    loong2 = strlen(numero2) - 1;

    if (loong1 < loong2)
    {
        while (loong1 < loong2)
        {
            for (int c = loong1; c >= 0; c--)
            {
                numero1[c + 1] = numero1[c];
            }
            numero1[0] = '0';
            loong1++;
        }
    }
    else
    {
        while (loong1 > loong2)
        {
            for (int c = loong2; c >= 0; c--)
            {
                numero2[c + 1] = numero2[c];
            }
            numero2[0] = '0';
            loong2++;
        }
    }

    printf("Numero = ");
    for (int i = 0; i <= loong1; i++)
    {
        int valor = (int)numero1[i];
        Entero1[i] = valor - 48;
        printf("%i ", Entero1[i]);
    }
    printf("\nNumero = ");
    for (int i = 0; i <= loong2; i++)
    {
        int valor = (int)numero2[i];
        Entero2[i] = valor - 48;
        printf("%i ", Entero2[i]);
    }

    printf("\n\nSuma de [%s] + [%s]", numero1, numero2);
        
    int resindice = loong1;
    int resultado[loong1 + 1];
    int contador = 0;
    for (indice = loong1; 0 <= indice; indice--)
    {
        aux1[0] = Entero1[indice];
        aux2[0] = Entero2[indice];
        int sum = aux1[0] + aux2[0] + acarreo;
        acarreo = 0;
        if (sum > 9)
        {
            acarreo = 1;
            sum = sum % 10;
        }
        
        resultado[resindice] = sum;
        resindice--;
        contador++;
        if (indice == 0 && acarreo > 0)
        {
            for (int c = contador; c >= 0; c--)
            {
                resultado[c + 1] = resultado[c];
            }
            resultado[0] = acarreo;
            contador++;
        }
    }

    printf("\n\nLa suma de A y B es [");
    for (int i = 0; i < contador; i++)
    {
        printf("%i", resultado[i]);
    }printf("]");

   
    printf("\n\nResultado = ");
    for (int i = 0; i < contador; i++)
    {
        printf("%i ", resultado[i]);
    }
    printf("\n\nResultado = ");
    for (int i = 0; i < contador; i++)
    {
        printf("%i", resultado[i]);
    }printf("\n");

    return 0;
}
