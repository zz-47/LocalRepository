// A program to print Weekday or Weekend
#include<stdio.h>
  int number;

int main()
{
 printf("Enter Any number 1-7 : ");
 scanf("%d",&number);
 switch(number) 
 { 
    case 2:
     case 3:  
       case 4:
         case 5:
           case 6: 
     printf("Keep working its a Weekday");
          break;
              case 1:  
                case 7: 
     printf("Congrates Happy Weekend !");   
          break;

          default:
     printf("Invalid input"); // giving error if wrong input
  }

    return 0;
 } 