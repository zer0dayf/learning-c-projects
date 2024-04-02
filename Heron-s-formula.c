#include <stdio.h>
#include<math.h>
void area(int a, int b, int c) // The Function Calculates The Area
{
	float s,ar;
	s=(a+b+c)/2; // Heron's formula for calculating triangle
	ar=sqrt(s);
	printf("The area of the triangle is : %.2lf",ar);	
}



int main(void)
{
	int a,b,c;
	printf("Enter the sides of triangle : \n");
	scanf("%d %d %d",&a,&b,&c);
	area(a,b,c);
	
}
