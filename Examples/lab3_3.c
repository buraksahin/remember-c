#include <stdio.h>

// function declarations
void surfaceAreaCube(float a);
void volumeCube(float x);
void volumeSphere(float x);
void surfaceAreaSphere(float r);
void surfaceAreaCylinder(float r, float h);
void volumeCylinder(float r, float h);
float pi = 3.14f;

int main(){
	while(1){
		printf("Enter 1 for calculating surface area. \nEnter 2 for calculating volume. \nEnter 3 for calculating both surface area and volume.\n");
		int input1,input2;
		scanf("%d",&input1);
		printf("Enter 1 for cube. \nEnter 2 for sphere. \nEnter 3 for cylinder.\n");
		scanf("%d",&input2);
		float value,value2;
		if(input1<4 && input1>0 || input2<4 && input2>0){
			// 1
			if(input1==1 || input1 == 3 && input2==1){
					printf("Enter number for calculate surface area of cube: ");
					scanf("%f",&value);
					surfaceAreaCube(value);
			}

			if (input1==1 || input1==3 && input2==2){
				printf("Enter number for calculate surface area of sphere: ");
				scanf("%f",&value);
				surfaceAreaSphere(value);
			}

			if (input1==1 || input1==3 && input2==3){
				surfaceAreaCylinder(value, value2);
			}

			// 2
			if(input1==2 || input1==3 && input2==1){
				printf("Enter number for calculate surface volume of cube: ");
				scanf("%f",&value);
				volumeCube(value);
			}

			if (input1==2 || input1==3 && input2==2){
				printf("Enter number for calculate volume of sphere: ");
				scanf("%f",&value);
				volumeSphere(value);
			}

			if (input1==2 || input1==3 && input2==3){
				printf("Enter number for calculate volume of cylinder: ");
				printf("\nEnter radius: ");
				scanf("%f",&value);
				printf("Enter height:");
				scanf("%f",&value2);
				volumeCylinder(value, value2);
			}
		}
		else{
				printf("Error: Incorrect entry");
		}
		printf("\n\n\n\n---------------------------------------------------\n\n\n\n");
	}// end of the while loop
	return 0;
}

void surfaceAreaCube(float a){
	float result = 6.0f*a*a;
	printf("surface area of cube: %f", result);
}

void volumeCube(float x){
	float result = x*x*x;
	printf("Surface volume of cube: %f", result);
}

void volumeSphere(float r){
	float result = (4.0f*pi*r*r*r)/3.0f;
	printf("Volume Sphere: %f", result);
}

void surfaceAreaSphere(float r){
	float result = 4.0f*pi*r*r;
	printf("Surface area of sphere: %f", result);
}

void surfaceAreaCylinder(float r, float h){
	float result = 2.0f*pi*r*(r+h);
	printf("Surface area of cylinder: %f", result);
}

void volumeCylinder(float r, float h){
	float result = pi*r*r*h;
	printf("Volume of Cylinder: %f", result);
}
