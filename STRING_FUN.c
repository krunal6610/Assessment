#include<stdio.h>
#include<string.h>

int main(){

int choice;

printf("-----Main Menu-----\n\n");

printf("1. StringLength\n");
printf("2. String Copy\n");
printf("3. Concat\n");
printf("4. Show\n");
printf("5. reverse\n");
printf("6. Exit\n\n");

printf("Please enter your choice: ");
scanf("%d",&choice);




switch(choice){

case 1: 

char strlength[100]="krunal";

printf("str length is: %d",strlen(strlength));


break;

case 2:

char str1[100]="hello", strcpy2[100];

puts(strcpy(strcpy2,str1));


break;
case 3: 

char s1[100]="kru", s2[100]="nal";

puts(strcat(s1,s2));

break;

case 4:

char name[100]="My Name is Krunal";

puts(name);
break;

case 5: 

char name2[100]="keyur";

puts(strrev(name2));


break;
       
case 6: 
printf("\nThank You");
break;

default : printf("InCorrect Choice");


}

    return 0;
}




