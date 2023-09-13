#include<stdio.h>

int main(){
	float a,b,c,d;
	printf("Nhap a : ");
		scanf("%f",&a);
		printf("Nhap b: ");
		scanf("%f",&b);
		printf("Nhap c: ");
		scanf("%f",&c);
	if(a==0){
		if(b==0){
		if(c==0){
		printf("\nPhuong trinh vo so nghiem.");
		}
		else{
		printf("\nPhuong trinh vo nghiem.");	
		}
		return 0;
	    }
		else{
		printf("\nCo nghiem x = %.2f",-c/b);
		}
		return 1;
	}
	else{
	d=b*b-4*a*c;
	if(d<0){
		printf("\nphuong trinh vo nghiem.");
	}
	else{
		if(d==0){
			printf("\nPhuong trinh co nghiem x = %.2f",-b/(2*a));
		}
		
		else{
			printf("\nPhuong trinh co nghiem x1 va x2 la %.2f va %.2f",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));
		}
		return 2;
	}
	return 3;	
	}
	return 4;
}
