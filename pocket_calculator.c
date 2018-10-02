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

<<<<<<< HEAD
void readInput(double* num1, double* num2) {
=======
void readInput(double num1, double num2) {
>>>>>>> 5b211451cc66166c056d2181b4bf91579e042ccd
  printf("Enter first operand: \n");
  scanf("%lf", &num1);
  printf("Enter second opernad: \n");
  scanf("%lf", &num2);
}

double add(double num1, double num2) {
<<<<<<< HEAD
=======
  if(num1 + num2 > DBL_MAX)
    printf("Number overflow\n");
  if(num1 + num2 < DBL_MIN)
    printf("Number underflow\n");
    
>>>>>>> 5b211451cc66166c056d2181b4bf91579e042ccd
  return num1 + num2;
}

double subtract(double num1, double num2) {

}

int main(int argc, char const *argv[]) {
  int choice;
  double num1 = 0;
  double num2 = 0;
<<<<<<< HEAD
  double sum = 0;

  choice = menu();
  readInput(&num1, &num2);

  switch (choice) {
    case 1:
    sum = add(num1, num2);
=======

  choice = menu();
  readInput(num1, num2);

  switch (choice) {
    case 1:
    add(num1, num2);
>>>>>>> 5b211451cc66166c056d2181b4bf91579e042ccd
    break;

    case 2:

    break;
    case 3:

    break;
    case 4:

    break;
    case -1:

    break;
  }
<<<<<<< HEAD
  printf("%fl\n",sum );
=======

>>>>>>> 5b211451cc66166c056d2181b4bf91579e042ccd
  return 0;
}
