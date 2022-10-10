/*The source file contains functions to formulate outputs for 
logical gates*/
#include<stdio.h>

//AND
int AND(int i1,int i2)
{
int r;
r=((i1)&(i2));
return r;       //r returns the logical output to logicgate.c
}

//OR
int OR(int i1,int i2)
{
int r;
r=((i1)|(i2));
return r;
}

//NOT
int NOT(int i1)
{
int r;
r=(!(i1));
return r;
}

//NAND
int NAND(int i1,int i2)
{
int r;
r=(!((i1)&(i2)));
return r;
}

//NOR
int NOR(int i1,int i2)
{
int r;
r=(!((i1)|(i2)));
return r;
}

//XOR
int XOR(int i1,int i2)
{
int r;
r=((!(i1))&(i2))|((i1)&(!(i2)));
return r;
}

//XNOR
int XNOR(int i1,int i2)
{
int r;
r=((!(i1))&(!(i2)))|((i1)&(i2));
return r;
}