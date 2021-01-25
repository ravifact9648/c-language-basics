/*                                          MAHARSHI DAYANAND UNIVERSITY(M.D.U) ROHTAK
                                UNIVERSITY INSTITUTE OF ENGINEERING AND TECHNOLOGY(U.I.E.T)
Name: Ravi Prakash Yadav                                                                             Date:24/01/2021
ROLL NO: 25618                                                                               CSE-B   B.TECH(1st sem.)         
Submitted to: prof. RAINU NANDAL MAM 

Que:4--> Write a program that prints the even numbers from 1 to 100.

                                                                                                                             */
 # include<stdio.h>
 # include<conio.h>
 int main(){
     printf("\n\t\t\t**********Printing Even Number from 1 to 100***********\n\n");
  for(int even=1;even<=100;even++){
     if(even%2==0){                                                 //% gives the reminder
         printf("%4d\t",even);                                     // t for a tab space
     }
 }     
 getch();
 return 0;
 }                                                                                                                      