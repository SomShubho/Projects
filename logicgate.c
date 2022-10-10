#include<stdio.h>
#include "gate.c" //import the source file having functions working on logic gates
#include<string.h>

void logic_gate(char*gate);

//function takes in the name of the gate chosen by user in string format
void logic_gate(char* gate)
{

if (strcmpi(gate,"AND")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Inputs\n");
printf("Input-1:");
scanf("%d",&i1);
printf("Input-2:");
scanf("%d",&i2);
printf("%d AND %d is %d",i1,i2,AND(i1,i2));
}

else if (strcmpi(gate,"OR")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Inputs\n");
printf("Input-1:");
scanf("%d",&i1);
printf("Input-2:");
scanf("%d",&i2);
printf("%d OR %d is %d",i1,i2,OR(i1,i2));
}

else if(strcmpi(gate,"NOT")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Input\n");
printf("Input-1:");
scanf("%d",&i1);
printf("NOT %d is %d",i1,NOT(i1));
}

else if(strcmpi(gate,"NAND")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Inputs\n");
printf("Input-1:");
scanf("%d",&i1);
printf("Input-2:");
scanf("%d",&i2);
printf("%d NAND %d is %d",i1,i2,NAND(i1,i2));
}

else if(strcmpi(gate,"NOR")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Inputs\n");
printf("Input-1:");
scanf("%d",&i1);
printf("Input-2:");
scanf("%d",&i2);
printf("%d NOR %d is %d",i1,i2,NOR(i1,i2));
}

else if(strcmpi(gate,"XOR")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Inputs\n");
printf("Input-1:");
scanf("%d",&i1);
printf("Input-2:");
scanf("%d",&i2);
printf("%d XOR %d is %d",i1,i2,XOR(i1,i2));
}

else if(strcmpi(gate,"XNOR")==0)
{
int i1,i2;
printf("Enter Only 0,1 as Inputs\n");
printf("Enter The Inputs\n");
printf("Input-1:");
scanf("%d",&i1);
printf("Input-2:");
scanf("%d",&i2);
printf("%d XNOR %d is %d",i1,i2,XNOR(i1,i2));
}
else
printf("Invalid input. Please enter valid input");
}