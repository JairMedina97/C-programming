#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double result = num*num*num;
    return result;
}


int main()
{
    printf("Hello\nWorld\n");
    printf("Hello\"World\n");
    char characterName[] = "Tom";
    int characterAge = 67;
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

/* Data Types */

    int age = 40;
    double gpa = 3.7;
    char grade = 'A';
    char phrase[] = "Giraffe Academy";

/* Format specifier */
    double favNum = 500.98754;
    printf("My favorite %s is %f \n","number" , favNum);

/* Working with numbers */

    printf("%f \n", 5 / 4.0);
    printf("%f \n", pow(2, 3));    /* 2 power 3*/
    printf("%f \n", sqrt(36));     /* square root 36*/
    printf("%f \n", ceil(36.35));  /* round this number up 36*/
    printf("%f \n", floor(36.35)); /* floor this number up 36*/

/* Constants */
//: This is used to write a single line comment
    const int NUM = 5;  /* Cant be modified, error*/
    printf("%d\n", NUM);


/* Basic Calculator */
    double num1;
    double num2;
    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);
    printf("Answer: %f \n", num1+ num2);

/* Arrays */
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int tenitems[10];
    tenitems[1] = 80;
    tenitems[0] = 90;
    luckyNumbers[1] = 200;
    printf("%d \n", luckyNumbers[1]);
    printf("%d \n", tenitems[1]);


    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);

    /* Return function cube */
    //:cube(double num)
    printf("Answer of cubic function: %f \n", cube(4.0));



    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s you are %d \n", name, age);
}



