/*Main Client code.
Starts with including all necessary source files and header file*/

//including necessary header files having built-in functions
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

//including user defined source files which perform necessary calculations
#include "projectc1.h"  //header file having structure declaration
#include "check.c"
#include "assign.c"
#include "logicgate.c"



void ask_user(int);

int retry;//global variable - it will decide whether user wants to continue running generator or not


void ask_user(int cc2)//asks the user for a prompt - to continue or exit
{
    printf("\nIf you would like to calculate from any other option\npress 1\nelse press 0\n");
    scanf("%d",&cc2);
    if(cc2==1)
    retry=1;
    else if(cc2==0)
    retry=0;
    else
    {
    printf("Invalid input. Please try again\n");
    ask_user(cc2);
    }
}



int main()
{
   
int cc,cc2;//cc2 - holds the answer to user prompt in ask_user
int choice;//has the answer to which of the calculator user wants
retry=0;

system("cls");
FILE *fp=fopen("file.txt","r");
if(fp==NULL)
printf("file cannot be opened\n");

else
{
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,stdout);
    }
    fclose(fp);
}

do//ask the user once - which calculation to perform
{

printf("\nEnter Your Choice:\n1.Logic Gates\n2.Area calculator\n3.Volume Calculator\n");
scanf("%d",&choice);


switch(choice)
{
case(1):
{
char gate[5];
system("cls");
printf("The Available Logic Gates are:\n");
printf("1.AND\n");
printf("2.OR\n");
printf("3.NOT\n");
printf("4.NAND\n");
printf("5.NOR\n");
printf("6.XOR\n");
printf("7.XNOR\n");
printf("Enter the Logic Gate Required: ");
scanf("%s",gate);

logic_gate(gate);
printf("\n");
ask_user(cc2);
break;
}



case(2):
{
   //area[]-array of structures, each structure holds information of each shape
 area_t area[] ={{1,"square","a*a"},{2,"rectangle","l*b"},{3,"circle","pi*r*r"}
    ,{4,"triangle","1/2*b*h"},{5,"parallelogram","b*h"},{6,"ellipse","pi*a*b"}
    ,{7,"trapezium","1/2*(a+b)*h"}};
    

    system("cls");//system("cls") included in stdlib.h - clears the console screen
    
    printf("Welcome to area calculator\n\n");
    printf("The area of some standard shapes are given\n");
    int n=sizeof(area)/sizeof(*area);//n holds the total number of elements in array area
    for(int i=0;i<n;i++)
    {
        printf("%d. %s = %s",area[i].index,(area+i)->name,(area+i)->formula);//print and show user the available shapes and their formulae
        printf("\n");
    }
    
    printf("\nState the Sl.no next to the shape you're interested in calculating the area\n");
    printf("Example: 1,2,3...\n\n");

    //cc holds input of which shape user wants
    scanf("%d",&cc);
    const char* name=my_check(&cc);//name is pointer that holds the name of the shape chosen
    system("cls");
    printf("You've chosen %s!\n",name);

    assign(name);

    printf("\nThank you for using area calculator\n");
    
    ask_user(cc2);
    break;
}


case(3):
{
    system("cls");
    printf("Welcome to Volume Calculator\n\n");
    char string[10];
    printf("Available standard shapes are:\n");
    printf("1.Cylinder\n2.Sphere\n3.Cone\n4.Cuboid\n5.Cube\n6.Pyramid\n7.Ellipsoid\n");
    printf("Enter your choice: ");
    scanf("%s",string);
    assign(string);
    printf("\nThank you for using Volume calculator\n");

    ask_user(cc2);

break;
}

default:
{
printf("Please enter valid number\n");
retry=1;

}

}

}while(retry!=0);

printf("Thank you for answering.");
return 0;
}
