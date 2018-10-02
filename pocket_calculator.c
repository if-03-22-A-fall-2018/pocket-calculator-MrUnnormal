#include "stdio.h"
#include "float.h"

int menu() {
  int choice;

    printf("Choose one of the following operations: \n");
    printf("  Add(1)\n");
    printf("  Subtract(2)\n");
    printf("  Multiply(3)\n");
    printf("  Divide(4)\n");
    printf("  End program(-1)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while(choice < -1 || choice > 4)
    {
        printf("Input not allowed, please try again\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    return choice;
}

void readInput(double* num1, double* num2) {
  printf("Enter first operand: \n");
  scanf("%lf", &num1);
  printf("Enter second opernad: \n");
  scanf("%lf", &num2);
}

double add(double num1, double num2) {
  return num1 + num2;
}

double subtract(double num1, double num2) {
  return num1 - num2;
}

int main(int argc, char const *argv[]) {
  int choice;
  double num1 = 0;
  double num2 = 0;
  double sum;

  choice = menu();
  readInput(&num1, &num2);

  switch (choice) {
    case 1:
    sum = add(num1, num2);
    break;

    case 2:
    sum = subtract(num1, num2);
    break;
    case 3:

    break;
    case 4:

    break;
    case -1:

    break;
  }
  printf("%fl \n", sum);
  return 0;
}
