#include <stdio.h>

int main(int argc, char const *argv[]) {
  int int_value = 666;
  int* int_pointer = 999;
  print_integers(int_value, &int_pointer);
  int_value = change_integers(int_value, &int_pointer);
  print_integers(int_value, &int_pointer);

  return 0;
}

void print_integers(int x,int* y){
  printf("%d, %d\n", x, *y);

}
int change_integers(int x,int* y){

  printf("Geben Sie einen Wert für X ein: \n");
  scanf("%d" , &x);
  printf("Geben Sie einen Wert für Y ein: \n");
  scanf("%d" , y);
  return x;
}
