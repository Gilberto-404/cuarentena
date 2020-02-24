#include <stdio.h>
#include <stdlib.h>

struct PunterObj
{
    float x;
    float y;
    float z;
};

void Punter_Obj(struct PunterObj *self, float x, float y, float z)
{
    self->x = x;
    self->y = y;
    self->z = z;
}

struct PunterObj *Point_create(float x, float y, float z)
{
    struct PunterObj *result = (struct PunterObj *)malloc(sizeof(struct PunterObj));
    Punter_Obj(result, x, y, z);
    return result;
}