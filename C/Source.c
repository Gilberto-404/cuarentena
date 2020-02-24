#include <stdio.h>
#include "DLC.h"

float pesomedio(float x, float y, float z);

float pesomedio(float x, float y, float z)
{
	return (x + y + z) / 3;
}

int main(void)
{
	struct PunterObj *_obj = (struct PunterObj *)malloc(sizeof(struct PunterObj));
	float x = 90;
	float y = 85;
	float z = 80;
	int op;
	int op2;
	int op3;
	Punter_Obj(_obj, x, y, z);
	do
	{
		printf("\nObj, Clase y Maquina de estados");
		printf("\n\n1. Peso reistrado\n2. Actualizar peso \n3. Peso medio\n4. Salir\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("Diciembre %f \nEnero %f \nFebrero %f\n", _obj->x, _obj->y, _obj->z);
			break;
		case 2:
			do
			{
				printf("Peso a modificar : \n1. Diciembre\n2. Enero\n3. Febrero\n");
				scanf("%d", &op2);
				switch (op2)
				{
				case 1:
					printf("Peso de Diciembre: ");
					scanf("%f", &x);
					Punter_Obj(_obj, x, y, z);
					break;
				case 2:
					printf("Peso de Enero: ");
					scanf("%f", &y);
					Punter_Obj(_obj, x, y, z);
					break;
				case 3:
					printf("Peso de Febrero: ");
					scanf("%f", &z);
					Punter_Obj(_obj, x, y, z);
					break;
				default:
					printf("Entrada no valida");
					break;
				}
				printf("Desea cambiar otro valor?\n1. Si\n2. No\n");
				scanf("%d", &op3);
			} while (op3 != 2);
		case 3:
			printf("\nTu peso promedio es: %f", pesomedio(_obj->x, _obj->y, _obj->z));
			if (pesomedio==85){
				printf("\nEsta bien si tu estatura es de 1.80\n");
			}else
			{
				printf("\nEs aceptable, pero considera la dieta\n");
			}
			
			break;
		case 4:
			printf("\n");
			break;
		default:
			printf("Entrada no valida");
			break;
		}
	} while (op != 4);

	return 0;
}