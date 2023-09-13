#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap N: ");
	scanf("%d",&n);
	printf("Uoc so cua so nguyen duong N: ");
	if(n<=0){
		printf("K");
	}
	else{
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf(" %d ",n/i);
		}
	}
}
	return 0;
}
