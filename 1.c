#include <stdio.h>
int main()
{
  float x,y;
  printf("Enter the numbers = ");
  scanf(%f%f,&x,&y);
}
  int opn;
  printf("Select the operation (1 for +, 2 for -, 3 for *, 4 for /) = ");
  scanf("%d",&opn);
switch(opn)
  {
    case 1:
    {
      printf("%f + %f = %f",x,y,x+y);
      break;
          }
    case 2:
    {
      printf("%f - %f = %f",x,y,x-y);
      break;
    }
    case 3:
    {
      printf("%f * %f = %f",x,y,x*y);
      break;
    }
    case 4:
    {
      printf("%f / %f = %f",x,y,x/y);
      break;
    } 
  }
  return 0;
}

  
