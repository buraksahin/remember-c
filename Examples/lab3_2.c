#include <stdio.h>
#include <float.h>
#include <math.h>

// function declarations
float surfaceAreaCube(float a);
float volumeCube(int x);
float volumeSphere(int x);
float surfaceAreaSphere(int r);
float surfaceAreaCylinder(int r, int h);
float volumeCylinder(int r, int h);
const float pi = 3.14f;

int main(){
	while(1){
		printf("Enter 1 for calculating surface area. \nEnter 2 for calculating volume. \nEnter 3 for calculating both surface area and volume.\n");
		int input1,input2;
		scanf("%d",&input1);
		printf("Enter 1 for cube. \nEnter 2 for sphere. \nEnter 3 for cylinder.\n");
		scanf("%d",&input2);
		int value,value2;
		if(input1==1){
			if(input2==1){
				printf("Enter number for calculate surface area of cube: ");
				scanf("%d",&value);
				printf("%.2f",surfaceAreaCube(value));
			}
			else if (input2==2){
				printf("Enter number for calculate surface area of sphere: ");
				scanf("%d",&value);
				printf("%.2f",surfaceAreaSphere(value));
			}
			else if (input2==3){
				printf("Enter number for calculate surface area of cylinder: ");
				printf("\nEnter radius: ");
				scanf("%d",&value);
				printf("Enter height:");
				scanf("%d",&value2);
				printf("Result is: %.2f",surfaceAreaCylinder(value, value2));
			}
			else{}
		}
		else if (input1==2){
			if(input2==1){
				printf("Enter number for calculate surface volume of cube: ");
				scanf("%d",&value);
				printf("Result of volume of cube: %.2f",volumeCube(value));
			}
			else if (input2==2){
				printf("Enter number for calculate volume of sphere: ");
				scanf("%d",&value);
				printf("Result of volume of sphere: %.2f",volumeSphere(value));
			}
			else if (input2==3){
				printf("Enter number for calculate volume of cylinder: ");
				printf("\nEnter radius: ");
				scanf("%d",&value);
				printf("Enter height:");
				scanf("%d",&value2);
				printf("Result of volume of cylinder: %.2f",volumeCylinder(value, value2));
			}
			else{}
		}
		else if (input1==3){
			if(input2==1){
				// Surface
				printf("Enter number for calculate surface area of cube: ");
				scanf("%d",&value);
				printf("%.2f",surfaceAreaCube(value));
				// VOlume
				printf("Enter number for calculate surface volume of cube: ");
				scanf("%d",&value);
				printf("Result of volume of cube: %.2f",volumeCube(value));
			}
			else if (input2==2){
				// Surface
				printf("Enter number for calculate surface area of sphere: ");
				scanf("%d",&value);
				printf("%.2f",surfaceAreaSphere(value));
				// VOlume
				printf("Enter number for calculate volume of sphere: ");
				scanf("%d",&value);
				printf("Result of volume of sphere: %.2f",volumeSphere(value));
			}
			else if (input2==3){
				// Surface
				printf("Enter number for calculate surface area of cylinder: ");
				printf("\nEnter radius: ");
				scanf("%d",&value);
				printf("Enter height:");
				scanf("%d",&value2);
				printf("Result is: %.2f",surfaceAreaCylinder(value, value2));
				// VOlume
				printf("Enter number for calculate volume of cylinder: ");
				printf("\nEnter radius: ");
				scanf("%d",&value);
				printf("Enter height:");
				scanf("%d",&value2);
				printf("Result of volume of cylinder: %.2f",volumeCylinder(value, value2));
			}
			else{}
		}
		else{}
		printf("\n\n\n\n---------------------------------------------------\n\n\n\n");
	}// end of the while loop
	return 0;
}

float surfaceAreaCube(float a){
	return 6.0f*a*a;
}

float volumeCube(int x){
	return x*x*x;
}
float volumeSphere(int r){
	return (4.0f*pi*r*r*r)/3.0f;
}

float surfaceAreaSphere(int r){
	return 4.0f*pi*r*r;
}

float surfaceAreaCylinder(int r, int h){
	return 2.0f*pi*r*(r+h);
}

float volumeCylinder(int r, int h){
	return pi*r*r*h;
}
