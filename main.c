#include <stdio.h>
#include <string.h>


// Function outside main function (SHOULD BE INITIALIZED INSIDE main() function)
void hello(){
    printf("Hello world\n");
}
//Construction of structs

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {

    //Print lines

    printf("*********************************************************\n");
    printf("*               BETHUEL MALUTI CODE INFO                *\n");
    printf("*********************************************************\n");


    char cars[5][2] = {                 // this is a 2d array
            {'1', 'A'},
            {'2', 'B'},
            {'3', 'C'},
            {'4', 'D'},
            {'5', 'E'}
    };

    // for loop
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            printf("%c", cars[i][j]);
        }
        printf(",\n");
    }

    // end for
    printf("\n\n");  // printing 2 new lines


    // another 2d array
    int nums[3][2] = {
            {1, 2},
            {3, 4},
            {5, 6}
    };

    int k, l;
    for (k = 0; k < 3; k++){
        for (l = 0; l < 2; l++){
            printf("%d,", nums[k][l]);
        }
        printf("\n");
    }

    int index = 2;
    while (index < 10){
        printf("%d\n", index);
        hello();
        index++;
    }

    // using structs

    struct Student student1; //student1 object
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "John");
    strcpy( student1.major, "Business");

    printf("%f\n", student1.gpa);
    printf("%s\n", student1.name);

    struct Student student2;       //student2 object
    student2.age = 20;
    student2.gpa = 3.5;
    strcpy( student2.name, "Max");
    strcpy( student2.major, "Art");

    printf("%s\n", student2.name);


    // modulus using '%' symbol
    int num1;
    printf("Enter a number to check it it is an even number or odd: ");
    scanf("%d", &num1);       // Accepting user input

    if (num1 %2 == 0){
        printf("This is an even number");
    } else {
        printf("This is an odd number\n");
    }


    // printing out remainder after division
    int num3 = (num1 % 10);
    printf("num3 is %d\n", num3);


    // Guessing game

    int secretNum = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNum && outOfGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter a number: ");

            scanf("%d", &guess);

            guessCount ++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1){
        printf("Out of guesses");
    } else {
        printf("You win!");
    }

    return 0;

    /////          !!!More code to come !!!
    /////            MADE BY BLISSMAL
    /////            USING C LION
}
