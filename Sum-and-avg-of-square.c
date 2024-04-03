#include <stdio.h>

int main (void)
{
	int i=0;
	int sum=0,num;
	double avg;
	while(i<5) // This will repeat our code block 5 times
	{
		printf("Enter an integer number:"); 
		scanf("%d",&num);
		sum=(num*num)+sum;
		i++;
	}
	
	avg=(sum/i);
	
	printf("Total of the squares %d\n ",sum);
	printf("Average of the squares %.2lf\n",avg);
	
}
