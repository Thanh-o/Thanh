#include<stdio.h>
int main(){
	int a;
	float b;
	
	printf("1 meter = 0.00062137119 mile");
	printf("\n------------------------");
	printf("\nMoi ban nhap so km: ");
	scanf("%d",&a);	
	b=a*1000*0.00062137119;
	printf("Ket qua:\n%d km = %f mile",a,b);
	
	return 0;
}
