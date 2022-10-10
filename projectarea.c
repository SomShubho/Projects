#include<stdio.h>
/*This sourcefile contains functions for area calculation
It contains function declaration and function definition
NOTE: The concept of callback is shown in this source file*/

int my_square(int*,int (*p)(int,int));  //p is pointer to a function which takes 2 int parameters and returns an int
int rectangle(int l, int b,int (*p)(int,int)); 
float my_circle(int r,int (*p)(int,int));
float my_triangle(int b, int h,int (*p)(int,int));
int my_parallelogram(int b, int h,int (*p)(int,int));
float my_trapezium(int a, int b, int h,int (*p)(int,int));
float my_ellipse(int a, int b,int (*p)(int,int));
int prod(int,int);      



int prod(int p1,int p2)     //function finds the product of 2 integers
{
    return p1*p2;
}


int my_square(int *a,int (*p)(int,int))     //function accepts a pointer, and another function through function pointer
{
    int t=*a;
    int y=p(t,t);
    return y;
}

int my_rectangle(int l, int b,int (*p)(int,int)){
    return p(l,b);
}

float my_circle(int r,int (*p)(int,int))
{
    return 3.1415*p(r,r);
}

float my_triangle(int b, int h,int (*p)(int,int))
{
    return 0.5*p(b,h);
}

int my_parallelogram(int b, int h,int (*p)(int,int))
{
    return p(b,h);
}

float my_trapezium(int a, int b, int h,int (*p)(int,int))
{
    return 0.5*p((a+b),h);
}

float my_ellipse(int a, int b,int (*p)(int,int))
{
    return 3.141*p(a,b);
}