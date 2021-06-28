#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if( op == '+'){
        printf("%f \n", num1 + num2);
    } else if( op == '-'){
        printf("%f \n", num1 - num2);
    } else if( op == '*'){
        printf("%f \n", num1 * num2);
    } else if( op == '/'){
        printf("%f \n", num1 / num2);
    } else {
        printf("Invalid Operator \n");
    }

    /* SWITCH Statements   */

    char grade = 'A';

    switch(grade){
    case 'A' :
        printf("You did great! \n");
        break;
    case 'B' :
        printf("You did alright! \n");
        break;
    case 'C' :
        printf("You did poorly! \n");
        break;
    case 'D' :
        printf("You did very bad! \n");
        break;
    default :
        printf("Invalid Grade \n");
    }

/*Structs to store int, double, strings in one single Data structure  */

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");
/*
    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Art"); */

    printf("%s \n", student1.name);

 /* While loops */
    int i = 1;
    while(i <= 5){
        printf("%d\n", i);
        i++;
 /*     i = i + 1; */
    }

 /* For loops */
    int j;
    for(j = 1; j <=5; j++){
        printf("%d\n", j);
    }

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int k;
    for(k = 0; k <6; k++){
        printf("%d\n", luckyNumbers[k]);
    }

    return 0;
}
