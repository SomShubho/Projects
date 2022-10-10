/*This source file comprises all functions to calculate volume of
shapes decided by the user from the prompts given*/
#include<stdio.h>
#include<math.h>//to work with necessary, pre-defined functions related to mathematical formulations


//cylinder//

void cylinder()
{
	
	float vol,r,h;
	printf("enter radius: ");
	scanf("%f",&r);
	printf("enter height: ");
	scanf("%f",&h);
   
	vol=(22*r*r*h)/7;
	printf("Volume of cylinder: %0.2f cu.units\n",vol);
	
}



//sphere//

void sphere()
{
     int r;
     float volume_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     volume_sphere = (4/3.0)*3.14*r*r*r;
     printf("Volume of Sphere = %0.2f cu.units\n",volume_sphere);
     
}


//cone//

void cone()
{
    float radius, height, volume;   
    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);
    printf("Enter the height of the cone: ");
    scanf("%f", &height);
    volume = (22 * radius * radius * height) / (3 * 7);
    printf("Volume of Cone: %.2f cu.units\n", volume);
    
}


//cuboid//

void cuboid()
{
	
	float length,breadth,height,volume;
	printf("enter length : ");
	scanf("%f",&length);
	printf("enter breadth : ");
	scanf("%f",&breadth);
	printf("enter height : ");
	scanf("%f",&height);
   
	volume=length*breadth*height;
	printf("Volume of cuboid: %0.2f\n",volume);
	
}


//cube//

 
  
void cube()  
{  
    int a;  
    printf("Enter side length\n");
    scanf("%d",&a);
    int volume=a*a*a;  
    printf("Volume of the cube=%d cu.units\n",volume);  
    
}  

//pyramid//



void pyramid(){
    int base, height;
    float volume;
    
    // Asking for input
    printf("Enter the base of the pyramid: ");
    scanf("%d", &base);
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    
    // Calculating volume
    volume = (0.33) * base * height;
    
    // Displaying output
    printf("Volume of pyramid: %.2f\n", volume);
    
}

//ellipsoid//


void ellipsoid(){
    int r1, r2, r3;
    float volume;
    
    // Asking for input
    printf("Enter the Radius 1: ");
    scanf("%d", &r1);
    printf("Enter the Radius 2: ");
    scanf("%d", &r2);
    printf("Enter the Radius 3: ");
    scanf("%d", &r3);
    
    // Calculating volume
    volume = (4/3.0) * 3.14 * r1 * r2 * r3;
    
    // Displaying output
    printf("Volume of Ellipsoid: %.2f\n", volume);
    
}