/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			<title of the assignment>
 * Author:			<your name>
 * ----------------------------------------------------------
 * Description:
 * <some brief description, what the program does: example:
 * Calculates a pyramid of numbers, i.e., it multiplies a big
 * integer by the number 2, its result by 3, etc. and then
 * returns to the original value by subsequently dividing,
 * again starting by 2, 3, etc.>
 * ----------------------------------------------------------
 */

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
  printf("Enter first operand: ");
  scanf("%lf", num1);
  printf("Enter second opernad: ");
  scanf("%lf", num2);
}

double add(double num1, double num2) {
  if(num1 - DBL_MAX < num2)
  {
    printf("NUMBER OVERFLOW\n");
    return -1;
  }
  else if(num1 + DBL_MIN < num2)
  {
    printf("NUMBER UNDERFLOW\n");
    return -1;
  }
  else
  {
    return num1 + num2;
  }
}

double subtract(double num1, double num2) {
  if(DBL_MIN - num1 > num2)
  {
    printf("NUMBER UNDERFLOW\n");
    return -1;
  }// Overflow not possible
  else
  {
    return num1 - num2;
  }
}

double multiply(double num1, double num2) {
  if((num1 * num2) / num2 != num1)
  {
    printf("NUMBER OVERFLOW\n");
    return -1;
  }
  return num1 * num2;
}

double divide(double num1, double num2) {
  if((num1 / num2) * num2 != num1)
  {
    printf("NUMBER UNDERFLOW\n");
    return -1;
  }
  if(num2 == 0)
  {
    printf("Division by 0\n");
    return -1;
  }
  else
  {
    return num1 / num2;
  }
}

int main(int argc, char const *argv[]) {
  int choice = -1;
  double num1;
  double num2;
  double res;
  do {
    choice = menu();
    if(choice != -1)
    {
      readInput(&num1, &num2);
    }
    switch (choice) {
      case 1:
      res = add(num1, num2);
      break;
      case 2:
      res = subtract(num1, num2);
      break;
      case 3:
      res = multiply(num1, num2);
      break;
      case 4:
      res = divide(num1, num2);
      break;
      case -1:
      printf("Program ended\n");
      break;
    }
    if(choice != -1)
    {
      printf("%fl \n", res);
    }
  } while(choice != -1);
  return 0;
}
