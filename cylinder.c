//Sophia Hostetler
//U27264415
//This program will read the values for the radius and height of a cylinder and will then calculate the surface area and volume of the cylinder

#include<stdio.h>

#define PI 3.141592
void area_volume(double radius, double height, double *pointer_area, double *pointer_volume);

int main()
{
	double radius, height, area, volume;

//prompt user to input radius and height

	printf("Enter the radius of cylinder: ");
		scanf("%lf", &radius);
	printf("Enter the height of the cylinder: ");
		scanf("%lf", &height);

//call area_volume function

	area_volume(radius, height, &area, &volume);
	
//print results

	printf("Output: The volume of the cylinder is %.3lf and the area is %.3lf", volume, area);

return 0;
}

void area_volume(double radius, double height, double *area, double *volume)
{

//calculate surface area

	*area=(2*PI*radius*height)+(2*PI*radius*radius);

//calculate volume

	*volume=(PI*radius*radius*height);
}
