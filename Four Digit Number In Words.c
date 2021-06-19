#include<stdio.h>
#include <string.h>

void ExtractNumbers(int num, int *p1, int *p10, int *p100, int *p1000 );
void printExpandedForm(int p1, int p10, int p100, int p1000);

void main(){
	int number, p1,p10,p100,p1000, count,num,numten;
	printf("Number of test  cases : ");
	scanf("%d", &count);
	
	for(int i=0; i<count; i++){
		p1=p10=p100=p1000;
		printf("Enter your number : ");
		scanf("%d: ", &number);
		ExtractNumbers(number, &p1,&p10,&p100,&p1000);

	char wordthousand[10];
	num = p1000/1000;
	
	switch(num){
		
		case 1:
			strncpy(wordthousand,"One",3);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 3); 
			break;
			
		case 2:
			strncpy(wordthousand,"Two",3);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 3); 
			break;
			
		case 3:
			strncpy(wordthousand,"Three",5);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 5); 
			break;
			
		case 4:
			strncpy(wordthousand,"Four",4);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 4); 
			break;
			
		case 5:
			strncpy(wordthousand,"Five",4);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 4); 
			break;
			
		case 6:
			strncpy(wordthousand,"Six",3);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 3); 
			break;
			
		case 7:
			strncpy(wordthousand,"Seven",5);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 5); 
			break;
			
		case 8:
			strncpy(wordthousand,"Eight",5);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 5); 
			break;
			
		case 9:
			strncpy(wordthousand,"Nine",4);
			printf("%s thousand ", wordthousand);
			strnset(wordthousand, ' ', 4); 
			break;
	}
		
	char wordhundred[10];
	num = p100/100;
	
	switch(num){
		
		case 0:
			break;
		
		case 1:
			strncpy(wordhundred,"One",3);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 3); 
			break;
		
		case 2:
			strncpy(wordhundred,"Two",3);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 3); 
			break;
		
		case 3:
			strncpy(wordhundred,"Three",5);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 5); 
			break;
		
		case 4:
			strncpy(wordhundred,"Four",4);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 4); 
			break;
		
		case 5:
			strncpy(wordhundred,"Five",4);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 4); 
			break;
		
		case 6:
			strncpy(wordhundred,"Six",3);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 4); 
			break;
		
		case 7:
			strncpy(wordhundred,"Seven",5);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 5); 
			break;
		
		case 8:
			strncpy(wordhundred,"Eight",5);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 5); 
			break;
		
		case 9:
			strncpy(wordhundred,"Nine",4);
			printf("%s Hundred", wordhundred);
			strnset(wordhundred, ' ', 4); 
			break;
	}
		
		char wordtenth[10];
		num = p10/10;
		numten = p1;
		int check=0;
		
	switch(num){
		
		case 0:
			if(numten != 0){
				printf(" and ");
				break;
			}
			
		case 1:
			check = 1;
			switch(numten){
				case 0:
					strncpy(wordtenth,"Ten",3);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 3); 
					break;
				case 1:
					strncpy(wordtenth,"Eleven",6);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 6); 
					break;
				case 2:
					strncpy(wordtenth,"Twelve",6);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 6); 
					break;
				
				case 3:
					strncpy(wordtenth,"Thirteen",8);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 8); 
					break;
				
				case 4:
					strncpy(wordtenth,"Fourteen",8);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 8); 
					break;
				
				case 5:
					strncpy(wordtenth,"Fifteen",7);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 7); 
					break;
				
				case 6:
					strncpy(wordtenth,"Sixteen",7);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 7); 
					break;
				
				case 7:
					strncpy(wordtenth,"Seventeen",9);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 9); 
					break;
				
				case 8:
					strncpy(wordtenth,"Eighteen",8);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 8); 
					break;
				case 9:
					strncpy(wordtenth,"Nineteen",8);
					printf(" and %s ", wordtenth);
					strnset(wordtenth, ' ', 8); 
					break;
				
				}
			break;
			
		case 2:
			strncpy(wordtenth,"Twenty",6);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 6); 
			break;
		
		case 3:
			strncpy(wordtenth,"Thirty",6);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 6); 
			break;
	
		case 4:
			strncpy(wordtenth,"Fourty",6);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 6); 
			break;
	
		case 5:
			strncpy(wordtenth,"Fifty",5);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 5); 
			break;
	
		case 6:
			strncpy(wordtenth,"Sixty",5);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 5); 
			break;
		
		case 7:
			strncpy(wordtenth,"Seventy",7);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 7); 
			break;
	
		case 8:
			strncpy(wordtenth,"Eighty",6);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 6); 
			break;
	
		case 9:
			strncpy(wordtenth,"Ninty",5);
			printf(" and %s ", wordtenth);
			strnset(wordtenth, ' ', 5); 
			break;
	}
		
		char wordones[10];
		num = p1;
		if (check == 0){
			
	switch(num){
		
		case 0:
			break;
		
		case 1:
			strncpy(wordones,"One",3);
			break;
		
		case 2:
			strncpy(wordones,"Two",6);
			break;
		
		case 3:
			strncpy(wordones,"Three",6);
			break;
	
		case 4:
			strncpy(wordones,"Four",6);
			break;
		
		case 5:
			strncpy(wordones,"Five",5);
			break;
		
		case 6:
			strncpy(wordones,"Six",5);
			break;
		
		case 7:
			strncpy(wordones,"Seven",7);
			break;
	
		case 8:
			strncpy(wordones,"Eight",6);
			break;
	
		case 9:
			strncpy(wordones,"Nine",5);
			break;
		}
		
		printf("%s", wordones);
		strnset(wordones, ' ', 10); 
	}
	printf("\n");
	}
}

void ExtractNumbers(int num, int *p1, int *p10, int *p100, int *p1000 ){
	
	int initial,initial2;
	*p1000=num/1000;
	*p1000=*p1000*1000;
	
	initial = num%1000;
	initial2=num%100;
	*p100=initial-initial2;
	
	initial = num%100;
	initial2=num%10;
	*p10=initial-initial2;
	
	initial = num%10;
	initial2=num%1;
	*p1=initial-initial2;
	
}

void printExpandedForm(int p1, int p10, int p100, int p1000){
	printf("\np1: %d, p10: %d, p100: %d, p1000: %d",p1, p10, p100, p1000);
}


