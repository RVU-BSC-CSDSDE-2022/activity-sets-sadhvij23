#include <stdio.h>
int main()
{
  float s1,s2,s3;
  printf("entet the 1st side of the triangle");
  scanf("%f",&s1);
  printf("entet the 2nd side of the triangle");
  scanf("%f",&s2);
  printf("entet the 3rd side of the triangle");
  scanf("%f",&s3);
  if(s1!=s2)
  {
    if(s2!=s3)
      printf("it is scalene\n");
    else
      printf("it is not scalene\n");
  }
  else
  {
    printf("it is not scalene\n");
  }
   return 0;
}

 