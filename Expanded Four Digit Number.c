#include<stdio.h>

	int InputFourDigitNumbers();
	int getThousandPlaceDigit(int);
	int getHundredPlaceDigit(int);
	int getTenthsPlaceDigit(int);
	int getOnePlaceDigit(int);

void main(){

	int num, p1000, p100, p10, p1;
	num=InputFourDigitNumbers();
	printf("Number : %d", num);
	p1000=getThousandPlaceDigit(num);
	p100=getHundredPlaceDigit(num);
	p10=getTenthsPlaceDigit(num);
	p1=getOnePlaceDigit(num);
	printf("\n%d",p1000);
	printf("+%03d+", p100);
	printf("%02d+", p10);
	printf("%d", p1);
}
	int InputFourDigitNumbers(){
		int num;
		scanf("%d", &num);
		while((num<999)||(num>10000)){ 
			printf("Invalid number!.\n Please input 999<number<10000");
			scanf("%d", &num);
		}
		return num;
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

