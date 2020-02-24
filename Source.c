#include <stdio.h>
#include "DLC.h"

float suma(float x, float y);
float prom(float x, float y, float z);

int main(void){
	struct Point* _obj = (struct Point*) malloc(sizeof(struct Point));
//	struct Point* result = 
	float x = 5, y = 6;
	float z = 6.7;
	int op, op2, op3;
	Point_init(_obj, x,y, z);
	do{
		printf("\n--------------------------------------------------\n");
		printf("Que desea hacer:\n1. Ver las calificaciones\n2. Modificar calificaciones\n3. Multiplicar las primeras dos calificaciones \n4. Promedio \n5. Salir\n");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Unidad I: %f \nUnidad II: %f \nUnidad III: %f\n", _obj->x, _obj->y, _obj->z);
				break;
			case 2:
				do{
					printf("Que calificacion quiere modificar : \n1. U1\n2. U2\n3. U3\n");+
					scanf("%d", &op2);
					switch(op2){
						case 1:
							printf("Ingrese la clificacion de la Unidad I: ");
							scanf("%f", &x);
							Point_init(_obj, x,y, z);
							break;
						case 2:
							printf("Ingrese la clificacion de la Unidad II: ");
							scanf("%f", &y);
							Point_init(_obj, x,y, z);
							break;
						case 3:
							printf("Ingrese la clificacion de la Unidad III: ");
							scanf("%f", &z);
							Point_init(_obj, x,y, z);
							break;
						default:
							printf("Incorrecto");
							break;
					}
					printf("Desea modificar otra calificacion\n1. Si\n2. No\n");
					scanf("%d", &op3);
				}while(op3!=2);
			case 3:
				printf("El producto de %f y %f es %f", _obj->x, _obj->y, suma(_obj->x, _obj->y));
				break;
			case 4:
				printf("\nEl promedio de las calificaciones es: %f", prom(_obj->x, _obj->y, _obj->z));
				break;
			case 5:
				printf("\t-----Hasta luego-----");
				break;
			default:
				printf("Incorrecto");
				break;
		}
	}while(op!=5);

	return 0;
}

float suma(float x, float y){
	return (x*y);
}

float prom(float x, float y, float z){
	return (x+y+z)/3;
}