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
   else if(choice =='S') // To start the game
   {
     system("cls");
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

     system("cls");
     printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
     printf("\n\n Here are some tips you might wanna know before playing:");
     printf("\n -------------------------------------------------------------------------");
     printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
     printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
     printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
     printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
     printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
     printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
     printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
     printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
     printf("\n    right option.");
     printf("\n >> You will be asked questions continuously, till right answers are given");
     printf("\n >> No negative marking for wrong answers!");
     printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
     printf("\n\n\n Press Y  to start the game!\n");
     printf("\n Press any other key to return to the main menu!");

     if (toupper(getch())=='Y')
     {
       goto home;

     }
     else
     {
       goto mainhome;
     }

     // Code for the tutorial game
     home:
     system("cls");
     count = 0;
     for(i=1;i<=3;i++)
     {
       system("cls");
       r1 = i;



       switch (r1) {
         case 1: // Test question 1
         printf("\n\nWhich of the following is a Palindrome number?");
     		printf("\n\nA.  42042\t\tB. 101010\n\nC. 23232\t\tD. 01234");
        if(toupper(getch())=='C')
        {
          printf("\n\nCorrect Answer...!!! :)");
          count++
          getch();
          break;
        }
        else
        {
          printf("\n\nWrong!!! The correct answer is C.23232");
          getch();
          break;
        }

        case 2: // Test question 2
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA. France\t\tB. Denmark\n\nC. Switzerland\t\tD. Finland");
		if (toupper(getch())=='C')
			{
        printf("\n\nCorrect!!!");
        count++;
			  getch();
			  break;
      }
		else
		       {
             printf("\n\nWrong!!! The correct answer is C. Switzerland");
	           getch();
	           break;
         }

      case 3: // Test question 3
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA. Polar Bear\t\tB. Hyena\n\nC. Donkey\t\tD. Chimpanzee");
		if (toupper(getch())=='B')
			{
        printf("\n\nCorrect!!!");count++;
        getch();
        break;
      }
		else
		   {
         printf("\n\nWrong!!! The correct answer is B.Hyena");
		     getch();
		     break;
       }

     case 4:
   printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
   printf("\n\nA. Wayne Rooney\t\tB. Lucas Podolski\n\nC. Lionel Messi\t\tD. Cristiano Ronaldo");
   if (toupper(getch())=='B')
     {
       printf("\n\nCorrect!!!");
       count++;
       getch();
       break;
     }
   else
          {
            printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
            getch();
            break;
        }

       case 5:
       printf("\n\n\nWhich is the third highest mountain in the world?");
       printf("\n\nA. Mt. K2\t\tB. Mt. Kanchanjungha\n\nC. Mt. Makalu\t\tD. Mt. Kilimanjaro");
       if (toupper(getch())=='B')
              {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
              }
       else
          {
            printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
            getch();
            break;
          }

       case 6:
   printf("\n\n\nWhat is the group of frogs known as?");
   printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");

   if (toupper(getch())=='D' )
     {
       printf("\n\nCorrect!!!");
       count++;
       getch();
       break;
     }
   else
          {
            printf("\n\nWrong!!! The correct answer is D.An Army");
            getch();
            break;
          }
        }
    }

    if(count>=2)
    goto test;
    else
    {
      system("cls");
      printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME\nANSWER TWO QUESTIONS AS CORRECT TO GET PAST THIS STAGE.");
    	getch();
    	goto mainhome;

    }

    test: // Begin actual game


       }
     }

   }


 }
