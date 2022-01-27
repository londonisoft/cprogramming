#include <stdio.h>

int main() {

    // variable declaration
    int intNuber;
    char name[20];
    float doubleNumber;

    // get integer
    printf("Enter your age (integer): \n");
    scanf("%d", &intNuber);

    // get char
    printf("Enter your name(char): \n");
    scanf("%s", &name);
    // get float
    printf("Enter your salary(float): \n");
    scanf("%f", &doubleNumber);
    
    // print values
    printf("Your age is: %d \n", intNuber);
    printf("Your name is: %s \n", name);
    printf("Your salary is: %f  \n", doubleNumber);
    return 0;
}
