#include<stdio.h>
#include<stdlib.h>
int main(void){

char fullname[26];
char grade[18];
char phone[20];
int age;
int rollno;
char address[40];


printf("Enter your complete Name... \n");
 fgets(fullname, sizeof(fullname), stdin ); // replaced fgets() with scanf() while writing char string

   printf("Enter your Phone no...\n");
    fgets(phone , sizeof(phone) , stdin); // replaced fgets() with scanf() while writing char string

    printf("Enter grade of student... \n");
      fgets(grade, sizeof(grade), stdin); // replaced fgets() with scanf() while writing char string
 
       printf("Enter your address...\n");
        fgets(address, sizeof(address), stdin); // replaced fgets() with scanf() while writing char string
            
        printf("Enter your age... \n "); 
         scanf("%d",&age);

           printf("Enter your rollno...\n");
            scanf("%d",&rollno);

printf("___________________________________________________");
printf("\n         *** Student Identity Card *** ");
printf("\n|-------------------------------------------------|");
printf("\n             Name : %s",fullname);
printf("\n|-------------------------------------------------|");
printf("\n             Age : %d ",age);
printf("\n|-------------------------------------------------|");
printf("\n             Grade : %s",grade);
printf("\n|-------------------------------------------------|");
printf("\n             Rollno.:%d",rollno);
printf("\n|-------------------------------------------------|");
printf("\n             Phone No. %s",phone);
printf("\n|-------------------------------------------------|");
printf("\n  Address: %s",address);
printf("\n|-------------------------------------------------|");
return 0;
}
