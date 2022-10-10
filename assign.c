#include <stdio.h>
#include "projectarea.c"        //source file has functions to calculate area
#include<string.h>
#include "vol_calc.c"           // source file has functions to calculate volume

void assign(const char* s);

//assign function accepts string name, and calls the necessary functions from related source files

void assign(const char* s)      //const - tell the compiler not to modify value/address of a particular variable
{

        //calling related functions to calculate area of square
         if(!strcmpi(s,"square"))
        {
        int a;
        printf("Enter side a length\n");
        scanf("%d",&a);
        printf("Area of Square is: %d sq.units\n",my_square(&a,prod));
        
        }

        //rectangle
        else if(!strcmpi(s,"rectangle"))
        {
        int l,b;
        printf("Enter sides l,b in l b format\n");
        scanf("%d %d",&l,&b);
        printf("Area of Rectangle is: %d sq.units\n",my_rectangle(l,b,prod));
        
        }

        //circle
        else if(!strcmpi(s,"circle"))
        {
        int r;
        printf("Enter radius r of circle\n");
        scanf("%d",&r);
        printf("Area of Circle is: %0.2f sq.units\n",my_circle(r,prod));
        
        }

        //triangle
        else if(!strcmpi(s,"triangle"))
        {
        int b,h;
        printf("Enter base b, height h in b h format\n");
        scanf("%d %d",&b,&h);
        printf("Area of Triangle is: %0.2f sq.units\n",my_triangle(b,h,prod));
        
        }

        //parallelogram
        else if(!strcmpi(s,"parallelogram"))
        {
        int b,h;
        printf("Enter base b, height h in b h format\n");
        scanf("%d %d",&b,&h);
        printf("Area of Parallelogram is: %d sq.units\n",my_parallelogram(b,h,prod));
        
        }

        //ellipse
		 else if(!strcmpi(s,"ellipse"))
        {
        int a,b;
        printf("Enter axes' lengths a and b in a b format\n");
        scanf("%d %d",&a,&b);
        printf("Area of Ellipse is: %0.2f sq.units\n",my_ellipse(a,b,prod));
        
        }

        //trapezium
        else if(!strcmpi(s,"trapezium"))
        {
        int a,b,h;
         printf("Enter sides a,b, and height h in a b h format\n");
        scanf("%d %d %d",&a,&b,&h);
        printf("Area of Trapezium is: %0.2f sq.units\n",my_trapezium(a,b,h,prod));
        
        }

        //volume calculator section

        else if(!strcmpi(s,"cylinder"))//calling functions to calculate volume of cylinder
        cylinder();

        else if(!strcmpi(s,"sphere"))//sphere
        sphere();

        else if(!strcmpi(s,"cone"))//cone
        cone();

        else if(!strcmpi(s,"cuboid"))//cuboid
        cuboid();

        else if(!strcmpi(s,"cube"))//compare if string s is same as cube
        cube();

        else if(!strcmpi(s,"pyramid"))//pyramid
        pyramid();

        else if(!strcmpi(s,"ellipsoid"))//ellipsoid
        ellipsoid();
        
        else
        printf("Please enter a valid name\n");
    }