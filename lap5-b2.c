#include<stdio.h>

int main(){
	int i,du,tong=0;
	printf("Nhap so : ");
	scanf("%d",&i);
	for(;i>0;){
		du=i%10;
		tong=tong+du;
		i=i/10;
	}
	printf("Tong cac chu so: %d",tong);
	
}
