//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1, n2, sum;
    
    printf( "\n Ingresa un numero: \n");
    scanf("%d", &n1 );

    printf("\n Ingresa un numero: \n");
    scanf("%d", &n2 );

    if (n1 > 0 && n2 > 0)
    {
        printf("===> Los numeros son positivos\n\n");
    }else
    {
        printf("===> Los numeros son negativos\n");
    }
    
    char * nu1 = malloc(12 * sizeof(char));
	sprintf(nu1, "%d", n1);

    char * nu2 = malloc(12 * sizeof(char));
	sprintf(nu2, "%d", n2);

    printf("Numero = ");
    for (int s = 0; s < strlen(nu1); s++){
        printf("%c ", nu1[s]);
    }

    printf("\nNumero = ");
    for (int z = 0; z < strlen(nu1); z++){
        printf("%c ", nu2[z]);
    }


    sum=n1+n2;
	char * Res = malloc(12 * sizeof(char));
	sprintf(Res, "%d", sum);

    printf("\n\nLa suma de [%d] + [%d]",n1,n2);
    printf("\n\nLa suma de A y B es [%d]",sum);

    printf( "\n\n Resultado = ");
    for (int i = 0; i < strlen(Res); i++){
        printf("%c ", Res[i]);
    }

    printf( "\n\n Resultado = %d", sum);
    //getch();

    return 0;
}
