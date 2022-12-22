#include<stdio.h>

struct triangle
{
float base;
float altitude;
float area;
}Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base of the triangle\n");
  scanf("%f" ,&t.base);
  printf("Enter the altitude of the triangle\n");
  scanf("%f",&t.altitude);
  return t;
}

void find_area(Triangle *t)
{
  t->area=((t->base)*(t->altitude))
}
}