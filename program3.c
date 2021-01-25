/*                                          MAHARSHI DAYANAND UNIVERSITY(M.D.U) ROHTAK
                                UNIVERSITY INSTITUTE OF ENGINEERING AND TECHNOLOGY(U.I.E.T)
Name: Ravi Prakash Yadav                                                                                      Date:24/01/2021
ROLL NO: 25618                                                                                            CSE-B   B.Tech(1st sem.)
Submitted to: prof. RAINU NANDAL MAM 

Write a program to read the name ANIL KUMAR AHLAWAT in three parts using the scanf statement and to display the same in the 
following format using the printf statement
(a)ANIL K. AHLAWAT
(b)A.K. GUPTA
(c)GUPTA A.K.
                                                                                                                        */

#include <stdio.h>
#include <conio.h>
char abbreviation_function(char name);


void main(){
             int name;
            int option;
        abbreviation_function(name);
        getch();
}
     char abbreviation_function(char name){
        char first[15];
        char middle[10];
        char last[15];
          check:
        printf("\n\t\t****Enter First middle and last Name****\n\n");
        scanf("%s", first);
        scanf("%s", middle);
        scanf("%s", last);
        printf("\n(a)--> %s %c. %s\n\n", first, middle[0], last);
        printf("(b)--> %c. %c. %s\n\n", first[0], middle[0], last);
        printf("(c)--> %s %c. %c.\n\n", last, first[0], middle[0]);
        goto check;
        return name;
     }
    