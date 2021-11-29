#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,cont,stop;
  unsigned long long z = 0;
  x=0;
  y=1;
 
  printf("¿Cuántos números deseas?: ");
  scanf("%d", &stop);

  //printf("0\n1\n");
  //for(inicio; paro; incremento/decremento){}
  
  for (cont=0;cont<stop;cont++){
    if(z==0 || z ==1){
      printf("%lld\n",z);
    }

      //printf("%d\n",z);  //z = 1
      printf("%lld\n",z);
      x=y;  //x=1
      y=z;  //y=2
      z=x+y;  //z = 1 + 1= 2
  }
  getchar();
  return 0;
}
