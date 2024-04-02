#include <stdio.h>


double avg(double num1, double num2, double num3) // The function calculates the average of 3 nums.
{
	double average;
	average=(num1+num2+num3)/3;
	return(average); // This function returns to average itself because we will assign this value as a variable.
}


int main(void)
{
	double a,b,c,average;
	printf("Enter the 3 real numbers to calculate avg of them: \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	average= avg(a,b,c); // We assigned the return value of avg function to average variable.
	printf("The average of the 3 nums is : %.2lf",average);
	return(0);
}
