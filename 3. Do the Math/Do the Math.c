#include <stdio.h>
#include <math.h> 
  
int main () { 
    int firstNum, secondNum, sum;

    puts("Please, enter an integer");
    scanf ("%i", &firstNum);
    puts("Please, enter one more integer to begin the calculations");
    scanf ("%i", &secondNum);

    printf("The sum of %i and %i is equal to %i \n", firstNum, secondNum, firstNum+secondNum);
    printf("The difference between %i and %i is equal to %i \n", firstNum, secondNum, firstNum-secondNum);
    printf("The product of %i and %i is equal to %i \n", firstNum, secondNum, firstNum*secondNum);
    printf("The quotient of %i divided %i is equal to %.2f \n\n", firstNum, secondNum, (float)firstNum/secondNum);

    system ("pause");
    return 0;
}