#include<stdio.h>
int main(){
	int a[5],i;
	float fa[10];
	printf("Mang so nguyen intArr: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Phan tu mang so thuc floatArr: ");
	for(i=0;i<10;i++){
		if(i<5){
		fa[i]=a[i];
		printf("%f\n",fa[i]);
	}
	else{
		printf("%f\n");
	}}
}
