#include <stdio.h>
#include <math.h>
int bin_to_dec(int);
int dec_to_bin(int);
int main() {
  int num;
  int menu;
  printf("Enter 1 to convert from Binary to Decimal and enter 2 to convert form Decimal to Binary : ");
  scanf("%d",&menu);
  if(menu==1){
      printf("Enter a binary number : ");
      scanf("%d", &num);
      printf("%d (2 Binary) = %d (10 Decimal)", num, bin_to_dec(num));
  }
  else if(menu==2){
      printf("Enter a decimal number : ");
      scanf("%d", &num);
      printf("%d (10 Decimal) = %d (2 Binary)", num, dec_to_bin(num));
  }
  else{
      printf("Enter a valid input");
  }
  return 0;
}
int bin_to_dec(int x) {
  int dec = 0, i = 0, last_dig;
  while (x!=0) {
    last_dig = x % 10;
    x /= 10;
    dec += last_dig*pow(2, i);
    ++i;
  }
  return dec;
}
int dec_to_bin(int y) {
  int sum = 0;
  int pf;
  int pos = 1;
  while (y!=0) {
    pf = y % 2;
    y /= 2;
    sum += pf*pos;
    pos = pos*10;
  }
  return sum;
}