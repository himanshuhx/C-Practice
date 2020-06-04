
#include <stdio.h>

int main(){
    int x, divisibleByTwo;
    
    puts("Please, enter an integer"); // asks for keyboard entry
    scanf ("%i", &x);

    divisibleByTwo = x % 2;
    if (divisibleByTwo == 0) {
        printf("Integer %i is an even number", x);

    } else {
        printf("Integer %i is an odd number", x);
	};
    system ("pause");
    return 0;
};
