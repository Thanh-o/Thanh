#include<stdio.h>
int main(){
	int n,i,a=1;
	printf("Nhap: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a*i;
	}
	printf("Giai thua cua %d = %d",n,a);
}
