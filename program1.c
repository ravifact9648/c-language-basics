/*                                          MAHARSHI DAYANAND UNIVERSITY(M.D.U) ROHTAK
                                UNIVERSITY INSTITUTE OF ENGINEERING AND TECHNOLOGY(U.I.E.T)
Name: Ravi Prakash Yadav                                                                                      Date:24/01/2021
ROLL NO: 25618                                                                                 CSE-B    B.TECH(1st sem.)
Submitted to: prof. RAINU NANDAL MAM 

Que:1--> Write a program to convert the temperature from Celsius to fahrenheit and Fahrenheit to Celsius
                                                                                                                        */

#include <stdio.h>
#include <stdlib.h>                                             // standard library header file for 'exit()' function
#include <conio.h>
float celcius(float cel);                                       // function prototype.
float farenheit(float faren);
void main()

{
    while (1){
        float cel, faren;
        int option;
        check:
        printf("Press 1: Convert Celcius to Farenheit\n");
        printf("Press 2: Convert Farenheit to Celcius\n");
        printf("Press 3: Exit\n");
        printf("****Note: Please press only integer. In case if you have pressed alphabet, close the program and run again\n");
        scanf("%d", &option);
        switch (option)                                                // control case statement
        {
        case 1:
            celcius(cel);
            break;
        case 2:
            farenheit(faren);
            break;
        case 3:
            exit(0);
        default:
            printf("\ainvalid keyword pressed\n\n");
            goto check;                                               //control statement control goes to check if wrong input provided.
            break;
        }
    }
}
float celcius(float cell)                                               // function definition for celcius.
{
    float cel;
    printf("Enter Celcius Temperature:\n");
    scanf("%f", &cel);
    float F = 1.8 * cel + 32;                                           // formula for celcius to farenheit conversion.
    printf("Temperature=%.2f F\n\n", F);
    getch();
    return F;
}
float farenheit(float faren) 
{                                                                        // function definition for farenheit.
    float far;
    printf("Enter Farenheit Temperature:\n");
    scanf("%f", &far);
    float cel = (far - 32) * 0.5555555555555556;                             //formulae for farenheit to celcius conversion.
    printf("Temperature=%.2f%cC\n\n", cel, 248);
    getch();
    return cel;
}
