/**
Extencion del primer archivo.
Aqui realiza la sutitucion de valores, que permite
actualizar el peso de cada mes ya registrado
permitiendo cambiar el valor.
 */

#include <stdio.h>
#include <stdlib.h>

/**
@brief Inicializacion de la estructura para encapsular las variables
 */
struct PunterObj
{
    int x;
    int y;
    int z;
};
/**
@brief Cambio de valores definidos mediante un puntero
@param val es quien permite asignar el nuevo valor(Valor de entrada)
 */
void Punter_Obj(struct PunterObj *val, int x, int y, int z)
{
    val->x = x;
    val->y = y;
    val->z = z;
}

struct PunterObj *Point_create(int x, int y, int z)
{
    /**
    @param malloc Asignacion de memoria dinamica para el puntero 
     */
    struct PunterObj *result = (struct PunterObj *)malloc(sizeof(struct PunterObj));
    /**
    @param PunterOBJ puntero con valor y espacio de memoria 
    */
    Punter_Obj(result, x, y, z);
    /**
    @returns Valor del puntero con el resultado, valor de y, valor de x y valor de z
    */
    return result;
}