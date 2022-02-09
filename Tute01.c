/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark, sum=0, i;
	float avg;
	
	for(i=0; i<2; i++){
		printf("Enter mark %d :", i+1);
		scanf("%d",&mark);
		
		sum+=mark;
		avg =(float)sum/2.0;
	}
	
	printf("\n\nAverage :%.2f", avg);
  
  return 0;
}

