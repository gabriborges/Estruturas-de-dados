#include <stdio.h>

int main(void) {
  int var1=0, var2=0;

  printf("\nVariavel 1: ");
  scanf("%d",&var1);

  printf("\nVariavel 2: ");
  scanf("%d",&var2);

  if(&var1 > &var2){
    printf("%d", var1);
  }else{
    printf("%d", var2);
  }

  
  return 0;
}
