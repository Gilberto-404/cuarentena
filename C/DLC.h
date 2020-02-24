#include <stdio.h>
#include <stdlib.h>

struct Point
{
    float x;
    float y;
    float z;
};

void Point_init(struct Point *self, float x, float y, float z)
{
    self->x = x;
    self->y = y;
    self->z = z;
}

struct Point *Point_create(float x, float y, float z)
{
    struct Point *result = (struct Point *)malloc(sizeof(struct Point));
    Point_init(result, x, y, z);
    return result;
}