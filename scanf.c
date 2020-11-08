#include <stdio.h>

returnANumber(){
    int number;

    printf("Type a number: ");
    scanf("%d", &number);
    printf("The number you typed was %d", number);
}

int main() {

    returnANumber();
    return 0;
}