#include<stdio.h>
int main(){
	float m;
	int c;
	printf("Do dai (m): ");
	scanf("%f",&m);
	printf("Don vi doi(1. mm,2.cmm,3.dm,4.km): ");
	scanf("%d",&c);
	switch(c){
		case '1':
			printf("Do dai theo mm la: %.0f",1000*m);
			break;
			 case 2: 
            printf("Do dai theo cm la: %.0f",100*m);
            break;
        case 3: 
            printf("Do dai theo kd la: %.0f",10*m);
            break;
        case 4: 
            printf("Do dai theo km la: %.2f",m/1000);
            break;
	}
	return 0;
}
