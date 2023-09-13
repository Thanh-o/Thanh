#include<stdio.h>
int main(){
	int Arr[10],i,j;
	printf("Nhap mang so nguyen Arr gom 10 pt: ");
	for(i=0;i<10;i++){
		scanf("%d",&Arr[i]);
	}
	printf("Cac pt o vi tri chan: ");
	for(j=0;j<10;j+=2){
		printf(" %d, ",Arr[j]);		
	}
}
