#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	int sec, min;
	
	printf("input year :");
	
	
	//scanf
	scanf("%i", &input);
	
	
	//print
	printf("is %i : leap year? %i/n", input,
	                                (input%4==0 && input%100!=0)(input%400==0) );
	return 0;
}
