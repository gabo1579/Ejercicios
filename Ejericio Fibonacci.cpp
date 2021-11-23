#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,z,cont,stop;

  x=0;
  y=1;
  z=0;
 
  printf("Cuantos números deseas: ");
  scanf("%I64u", &stop);

  //printf("0\n1\n");
  //for(inicio; paro; incremento/decremento){}
  
  for (cont=0;cont<stop;cont++){
    if(z==0 || z ==1){
      printf("%I64u\n",z);
    }

      //printf("%d\n",z);  //z = 1
      z=x+y;  //z = 1 + 1= 2
      printf("%I64u\n",z);
      x=y;  //x=1
      y=z;  //y=2
  }
 
  getchar();
  return 0;
}
