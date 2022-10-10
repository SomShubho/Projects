#include<stdio.h>

const char* my_check(int *);
//my_check- function which takes in a pointer and returns a pointer to char
//(this can be used to return a string)

const char* my_check(int *c)//c-will take in an integer value as pointer
{
    switch(*c)
    {
        case 1:
        return "square";break;

        case 2:
        return "rectangle";break;

        case 3:
        return "circle";break;

        case 4:
        return "triangle";break;

        case 5:
        return "parallelogram";break;

        case 6:
        return "ellipse";break;

        case 7:
        return "trapezium";break;

        default:
        printf("Invalid input");
    }
    }
