#include<stdio.h>
#include<stdlib.h>

int main()
{
  int arr[5],i,sum=0,j,k,num;
  printf("enter the elements of the array\n");
  for(i=0;i<5;i++)
    {
      scanf("%d",&num);
      arr[i]=num;
    }
  for(i=0;i<5;i++)
    {
      k=0;
      for(j=2;j<=arr[i];j++)
        {
          if((arr[i]%j)==0)
          k++;
        }
      if(k>=2)
        sum+=arr[i];      
    }
  printf("sum of composite numbers is:%d\n",sum);  
  return 0;
}