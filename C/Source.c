/**
@file source.c
@brief Objeto, Clase y Maquina de estados en C de un registro de peso
@author Gilberto Nava Marcos
@date 2/2020
*/

#include <stdio.h>
#include "DLC.h"
/**
 * inicializacion del 
*/
int pesomedio(int x, int y, int z);

int pesomedio(int x, int y, int z)
{
	return (x + y + z) / 3;
}

int main(void)
{
	/**
	@brief inicializacion del puntero con memoria dinamica con espacio necesario 
	*/
	struct PunterObj *_obj = (struct PunterObj *)malloc(sizeof(struct PunterObj));
	/**
	 *@brief Valores por defecto, referentes a cada mes.
	 */
	int x = 90;
	int y = 85;
	int z = 80;
	/**
	 * @brief valores enteros, correspondientes a cada opcion ingresada por el usuario
	*/
	int op;
	int op2;
	int op3;
	/**
	 * Llamada al puntero que permite actualizar los valores definidos. 
	 */
	Punter_Obj(_obj, x, y, z);
	do
	{
		/**
		 * Mensajes de inicio que "despliegan" un menu, permitiendo teclear el valor para seleccionar la accion a realizar
		*/
		printf("\nObj, Clase y Maquina de estados");
		printf("\n\n1. Peso reistrado\n2. Actualizar peso \n3. Peso medio\n4. Salir\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
		/**
		 * @brief Muestra los valores 
		*/
			printf("Diciembre %d \nEnero %d \nFebrero %d\n", _obj->x, _obj->y, _obj->z);
			break;
		case 2:
			do
			{
				/**
				 * @brief Menu que permite modificar los valores correspondientes al mes en el que se registro el peso.
				*/
				printf("Peso a modificar : \n1. Diciembre\n2. Enero\n3. Febrero\n");
				scanf("%d", &op2);
				switch (op2)
				{
				case 1:
					printf("Peso de Diciembre: ");
					scanf("%d", &x);
					Punter_Obj(_obj, x, y, z);
					break;
				case 2:
					printf("Peso de Enero: ");
					scanf("%d", &y);
					Punter_Obj(_obj, x, y, z);
					break;
				case 3:
					printf("Peso de Febrero: ");
					scanf("%d", &z);
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
		/**
		 * Mensajes relacionados con el peso, segun los valores por defecto o las actualizaciones del valor.
		*/
			printf("\nTu peso promedio es: %d", pesomedio(_obj->x, _obj->y, _obj->z));
			if (pesomedio==85){
				printf("\nEsta bien si tu estatura es de 1.80\n");
			}else
			{
				printf("\nEs aceptable, pero considera la dieta\n");
			}
			
			break;
		case 4:
		/**
		 * Salida del programa
		 * @param break rompiendo el case numero 4, termina la ejecucion. 
		 */
			printf("\n");
			break;
		default:
		/**
		 * Mensaje de validacion, indica que no se ingreso un valor coherente, segun el programa
		*/
			printf("Entrada no valida");
			break;
		}
	} while (op != 4);

	return 0;
}