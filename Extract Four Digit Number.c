#include<stdio.h>

void ExtractNumber(int num, int *p1, int *p10, int *p100, int *p1000);
int getThousandPlaceDigit(int);
int getHundredPlaceDigit(int);
int getTenthsPlaceDigit(int);
int getOnePlaceDigit(int);

void main() {
int number, num;
int p1, p10, p100, p1000;
int x1, x10, x100, x1000;

scanf("%d", &num);
number = num;
x1000 = getThousandPlaceDigit(num);
x100 = getHundredPlaceDigit(num);
x10 = getTenthsPlaceDigit(num);
x1 = getOnePlaceDigit(num);
printf("\nExpanded Form : %d +", x1000);
printf(" %03d +", x100);
printf(" %02d +", x10);
printf(" %d", x1);

ExtractNumber(number, &p1, &p10, &p100, &p1000);
	printf("\nExtract number : p1000=%d", p1000);
	printf(" p100=%d", p100);
	printf(" p10=%d", p10);
	printf(" p1=%d", p1);
}

void ExtractNumber(int num,int *p1,int *p10,int *p100,int *p1000) {
	*p1000=(num/1000);
	*p100=(num%1000)/100;
	*p10=(num%100)/10;
	*p1=num%10;	
}

int getThousandPlaceDigit(int num){
	int p,x1000;
	p=num/1000;
	x1000=p*1000;
	return x1000;
}

int getHundredPlaceDigit(int num){
	int initial,initial2;
	initial = num%1000;
	initial2=num%100;
	return initial-initial2;
}

int getTenthsPlaceDigit(int num){
	int initial,initial2;
	initial = num%100;
	initial2=num%10;
	return initial-initial2;
}
	
int getOnePlaceDigit(int num){
	int initial,initial2;
	initial = num%10;
	initial2=num%1;
	return initial-initial2;
} 