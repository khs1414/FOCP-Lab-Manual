#include <stdio.h>
int main(){
  char op;
  int num1, num2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands : ");
  scanf("%d %d", &num1, &num2);
  switch (op) {
    case '+':
      printf("%d + %d = %d", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%d - %d = %d", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%d * %d = %d", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%d / %d = %d", num1, num2, num1 / num2);
      break;
    default:
      printf("Enter a correct operator");
  }

  return 0;
}