#include<stdio.h>
#include <math.h>
/*void main(){
	char nameP1[10];
	int x1, y1;
	char nameP2[10];
	int x2, y2;
	
	scanf("%s", nameP1);
	scanf("%d %d", &x1, &y1);
	printf("Point %s:(%d, %d)", nameP1, x1, y1);
	
	scanf("%s", nameP2);
	scanf("%d %d", &x2, &y2);
	printf("Point %s:(%d, %d)", nameP2, x2, y2);
}*/
struct point{
		char name[10];
		int x, y;	
	};
	
	double CalculateDistance(struct point P, struct point Q);
		
void main(){
	
	struct point P, Q;
	double dis;
	scanf("%s", P.name);
	scanf("%d %d", &P.x, &P.y);
	scanf("%s", Q.name);
	scanf("%d %d", &Q.x, &Q.y);
	printf("Point %s:(%d, %d)", P.name, P.x, P.y);
	printf("\nPoint %s:(%d, %d)", Q.name, Q.x, Q.y);
	dis = CalculateDistance(P, Q);
}

	double CalculateDistance(struct point P, struct point Q){
		double dis;
		dis = ((Q.x-P.x)*(Q.x-P.x))+((Q.y-P.y)*(Q.y-P.y));
		printf("\nDistance between point %s and %s is %.3lf", P.name, Q.name, sqrt(dis));
	}
	
	
