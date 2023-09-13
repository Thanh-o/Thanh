#include<stdio.h>
int main(){
	int n,a,b,c,d,e;
	printf("Nhap vao so nguyen duong num<co 5 chu so>: ");
	scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n%10;
	printf("Tong cac chu so cua num: %d",a+b+c+d+e);
	
	return 0;
}
