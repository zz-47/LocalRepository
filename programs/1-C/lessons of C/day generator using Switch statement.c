// A program to print days of week using cases of switch statement
#include<stdio.h>
 
 int main(){
  int number;

  printf("Enter any number ranging from 1-7 :  ");
scanf("%d",&number);
                        // starting switch
  switch(number) {

    case 1:
    printf("Sunday");
    break;
      
     case 2:
     printf("Monday");
     break;
      
       case 3:  
       printf("Tuesday");
       break;
        
         case 4:
         printf("Wednesday");
         break;

          case 5:
          printf("Thurday");
          break;

            case 6: 
            printf("friday");
            break;

               case 7: 
               printf("Saturday");
               break;
                
                 default:
                 printf("Invalid input"); // giving error if wrong input
  }

    return 0;
 } 