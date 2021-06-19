#include<stdio.h>
void main()
{
	int number, p1000, p100, p10, p1;
	
	scanf("%d", &number);
	while((number<=999)||(number>9999)){
		printf("\nInvalid Number!, Please input a number between 1000-9999: ");
		scanf("%d", &number);
	}
	p1000=number/1000;
	number=number%1000;
	
	p100=number/100;
	number=number%100;
	
	p10=number/10;
	number=number%10;
	
	p1=number/1;
	number=number%1;
	
	printf("%d, %d, %d, %d", p1, p10, p100, p1000);
	getch();
}
