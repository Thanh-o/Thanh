#include<stdio.h>
int main(){
	
	int N,i;
	printf("Nhap so nguyen duong N: ");
	scanf("%d",&N);
		if(N<=0){
		printf("Khong hop le!!");
	}
	else{
	int F[N+1];
	F[1]=1;
    F[0]=0;
    F[2]=1;
	printf("Day Fibonacci nho hon %d: %d %d %d ",N,F[0],F[1],F[2]);	
	for(i=3;i<=N;i++){
		F[i]=F[i-1]+F[i-2];
		if(F[i]<N){
	    printf(" %d ",F[i]);
	}
	}
}
	return 0;
}
