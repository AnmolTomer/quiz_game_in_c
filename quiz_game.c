#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

 void show_record();
 void reset_score();
 void help();
 void edit_score(float, chat[]);
 int main()
 {
   int counter,r,r1,count,i,n;
   float score;
   char choice;
   char playername[20];
   mainhome:
   system("cls");
   printf("\t\t\tC PROGRAM QUIZ GAME");
   printf("\n\t\t________________________________________");

   printf("\n\t\t\t   WELCOME ");
   printf("\n\t\t\t      to ");
   printf("\n\t\t\t   THE GAME ");
   printf("\n\t\t________________________________________");
   printf("\n\t\t________________________________________");
   printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
   printf("\n\t\t________________________________________");
   printf("\n\t\t________________________________________");
   printf("\n\t\t > Press S to start the game");
   printf("\n\t\t > Press V to view the highest score  ");
   printf("\n\t\t > Press R to reset score");
   printf("\n\t\t > press H for help            ");
   printf("\n\t\t > press Q to quit             ");
   printf("\n\t\t________________________________________\n\n");
   choice= toupper(getch()); // Take the input from user. Depends on conio and ctype header files.
   if (choice == 'V') // To view the highest score
   {
     show_record();
     goto mainhome;
   }
   else if (choice == 'H') // To show help
   {
     help();
     getch();
     goto mainhome;
   }
   else if (choice == 'R') // To reset the score
   {
     reset_score();
     getch();
     goto mainhome;
   }
   else if(choice=='Q') // To quit the game
   {
     exit(1);
   }
   else if(choice =='S') // To clear the screen
   {
     system("cls")
   }


 }
