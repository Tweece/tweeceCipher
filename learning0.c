#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

    // displaying text
    printf("Hello\n");
    printf("World\n");


    // variables
    // are case sensitive

    // text
    char testGrade = 'A'; // 8 bit char
    char name[] = "Mike"; // array of characters "string"

    // integer
    short age0 = 10;         // atleast 16-bits signed integer
    int age1 = 20;           // atleast 16-bits signed integer (not smaller than short)
    long age2 = 30;          // atleast 32-bits signed integer
    long long age3 = 40;     // atleast 64-bits signed integer

    float gpa0 = 2.5;       // single percision floating point
    double gpa1 = 3.5;       // double-precision floating point
    long double gpa2 = 3.5;  // extended-precision floating point

    int isTall;             // 0 if false, non-zero if true
    isTall = 1;

    // printing values
    printf("%s, your grade is %c \n", name, testGrade);
    /*
    %c	character
    %d	integer number (base 10)
    %e	exponential floating-point number
    %f	floating-point number
    %i	integer (base 10)
    %o	octal number (base 8)
    %s	a string of characters
    %u	unsigned decimal (integer) number
    %x	number in hexadecimal (base 16)
    %%	print a percent sign
    \%	print a percent sign
    */

    // casting
    printf("%d \n", (int)3.14);
    printf("%f \n", (double)3 / 2);

    // pointers
    int num = 10;
    printf("%p \n", &num); // example 01FB30A2

    int *pNum = &num; //storing the pointer in pNum variable
    printf("%p \n", pNum);
    printf("%d \n", *pNum); //de referencing // it gives the value of the pointer

    // math
    printf("%d \n", 2 * 3);       // Basic Arithmetic: +, -, /, *

    printf("%f \n", pow(2, 3));
    printf("%f \n", sqrt(144));
    printf("%f \n", round(2.7));

    // user input
    char namee[10];
    printf("Enter your name: ");
    // fgets(variable, sign limit, stdin)
    fgets(namee, 10, stdin);
    printf("Hello %s! \n", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d \n", age);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("You got an %c on the test \n", grade);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f \n", gpa);

    // array
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    //        indexes:    0  1  2   3   4   5
    luckyNumbers[0] = 90;
    printf("%d \n", luckyNumbers[0]);
    printf("%d \n", luckyNumbers[1]);

    // 2df array
    int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
    numberGrid[0][1] = 99;

    printf("%d \n", numberGrid[0][0]);
    printf("%d \n", numberGrid[0][1]);

    //struct
    struct Book{
        char title[100];
        char author[100];
    }

    int main(){

          struct Book book1;
          book1.numPages = 600;
          strcpy( book1.title, "Harry Potter" );
          strcpy( book1.author, "JK Rowling");

          printf("%s \n", book1.title);

          return 0;
    }
    return 0;
}
